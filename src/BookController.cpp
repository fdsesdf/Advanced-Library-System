#include "RedisClient.h"
#include <iostream>
#include <stdexcept>
#include <json/json.h> // 使用 JSON 库进行序列化和反序列化

// 构造函数，连接到 Redis
RedisClient::RedisClient() {
    context = redisConnect("127.0.0.1", 6379);
    if (context == nullptr || context->err) {
        if (context) {
            std::cerr << "Redis 连接错误: " << context->errstr << std::endl;
        } else {
            std::cerr << "无法连接到 Redis" << std::endl;
        }
        throw std::runtime_error("Redis 连接失败");
    }
}

// 析构函数，释放 Redis 连接
RedisClient::~RedisClient() {
    if (context) {
        redisFree(context);
    }
}

// 从缓存中获取书籍
std::optional<Book> RedisClient::getBookFromCache(const std::string& title) {
    redisReply* reply = static_cast<redisReply*>(redisCommand(context, "GET %s", title.c_str()));
    if (reply == nullptr) {
        std::cerr << "Redis 命令执行失败" << std::endl;
        return std::nullopt;
    }

    if (reply->type == REDIS_REPLY_STRING) {
        Book book = deserializeBook(reply->str);
        freeReplyObject(reply);
        return book;
    }

    freeReplyObject(reply);
    return std::nullopt; // 未找到缓存
}

// 缓存书籍
void RedisClient::cacheBook(const Book& book) {
    std::string key = book.getTitle();
    std::string serializedBook = serializeBook(book);
    redisCommand(context, "SET %s %s", key.c_str(), serializedBook.c_str());
}

// 序列化书籍为字符串
std::string RedisClient::serializeBook(const Book& book) {
    Json::Value jsonData;
    jsonData["id"] = book.getId();
    jsonData["title"] = book.getTitle();
    jsonData["author"] = book.getAuthor();
    jsonData["isbn"] = book.getIsbn();
    jsonData["year_published"] = book.getYearPublished();
    jsonData["copies_available"] = book.getCopiesAvailable();

    Json::StreamWriterBuilder writer;
    return Json::writeString(writer, jsonData);
}

// 反序列化字符串为书籍
Book RedisClient::deserializeBook(const std::string& data) {
    Json::Value jsonData;
    Json::CharReaderBuilder reader;
    std::istringstream s(data);
    std::string errs;

    Json::parseFromStream(reader, s, &jsonData, &errs);

    return Book(
        jsonData["id"].asInt(),
        jsonData["title"].asString(),
        jsonData["author"].asString(),
        jsonData["isbn"].asString(),
        jsonData["year_published"].asInt(),
        jsonData["copies_available"].asInt()
    );
}
