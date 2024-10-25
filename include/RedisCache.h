#ifndef REDISCACHE_H
#define REDISCACHE_H

#include <string>
#include <hiredis/hiredis.h>
#include "RedisClient.h"

class RedisCache {
private:
    redisContext* context;
    RedisClient redis;
public:
    RedisCache();  // 构造函数初始化 Redis 连接
    ~RedisCache();  // 析构函数释放 Redis 连接

    // 缓存图书信息
    void cacheBook(const std::string& isbn, const std::string& bookInfo);

    // 从缓存中获取图书信息
    std::string getBookFromCache(const std::string& isbn);
};

#endif // REDISCACHE_H
