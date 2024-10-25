#include "RedisCache.h"
#include <iostream>
#include <hiredis/hiredis.h>


void RedisCache::cacheBook(const std::string& isbn, const std::string& bookInfo) {
    // 将图书信息存入 Redis 缓存
    redis.set(isbn, bookInfo);
}

std::string RedisCache::getBookFromCache(const std::string& isbn) {
    std::string bookInfo;
    if (redis.exists(isbn)) {
        bookInfo = redis.get(isbn);
    }
    return bookInfo;
}

// 构造函数
RedisCache::RedisCache() : redis("127.0.0.1", 6379) {
}

// 析构函数
RedisCache::~RedisCache() {
}