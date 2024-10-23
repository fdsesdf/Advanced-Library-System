#include "RedisClient.h"
#include <iostream>
#include <stdexcept>
#include <sstream>  // 用于序列化和反序列化
#include <hiredis/hiredis.h>

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

RedisClient::~RedisClient() {
    redisFree(context);
}

std::optional<Book> RedisClient::getBookFromCache(const std::string& title) {
    redisReply* reply = (redisReply*)redisCommand(context, "GET %s", title.c_str());
    if (reply->type == REDIS_REPLY_STRING) {
        Book book = deserializeBook(reply->str);  // 反序列化为 Book 对象
        freeReplyObject(reply);
        return book;
    }
    freeReplyObject(reply);
    return std::nullopt;  // 如果没有找到
}

void RedisClient::cacheBook(const Book& book) {
    std::string serializedBook = serializeBook(book);  // 序列化书籍对象
    redisCommand(context, "SET %s %s", book.title.c_str(), serializedBook.c_str());
}

std::string RedisClient::serializeBook(const Book& book) {
    std::ostringstream oss;
    oss << book.getId() << "," << book.getTitle() << "," << book.getAuthor() << "," 
        << book.getIsbn() << "," << book.getYearPublished() << "," << book.getCopiesAvailable();
    return oss.str();
}

// 反序列化字符串为书籍
Book RedisClient::deserializeBook(const std::string& data) {
    std::istringstream iss(data);
    std::string id, title, author, isbn, yearPublished, copiesAvailable;
    
    std::getline(iss, id, ',');
    std::getline(iss, title, ',');
    std::getline(iss, author, ',');
    std::getline(iss, isbn, ',');
    std::getline(iss, yearPublished, ',');
    std::getline(iss, copiesAvailable, ',');

    return Book(std::stoi(id), title, author, isbn, std::stoi(yearPublished), std::stoi(copiesAvailable));
}
