#ifndef REDISCLIENT_H
#define REDISCLIENT_H

#include <string>
#include <optional>
#include <hiredis/hiredis.h>
#include <sw/redis++/redis++.h>
#include "Book.h"
#include <memory>
class RedisClient {
public:
    RedisClient();
    RedisClient(const std::string& host, int port);
    ~RedisClient();
    void set(const std::string& key, const std::string& value);
    std::string get(const std::string& key);
    // 从缓存中获取书籍
    std::optional<Book> getBookFromCache(const std::string& title);
    bool exists(const std::string& key); 
    // 缓存书籍
    void cacheBook(const Book& book);

private:
    redisContext* context; // Redis 连接上下文
    std::shared_ptr<sw::redis::Redis> redis;
    // 序列化书籍为字符串
    std::string serializeBook(const Book& book);

    // 反序列化字符串为书籍
    Book deserializeBook(const std::string& data);
};

#endif // REDISCLIENT_H
