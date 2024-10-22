#include "RedisClient.h"
#include <hiredis/hiredis.h>
#include <stdexcept>

// 假设已经连接上 Redis
redisContext* redisContext;

std::string RedisClient::get(const std::string& key) {
    redisReply* reply = (redisReply*)redisCommand(redisContext, "GET %s", key.c_str());
    if (!reply) {
        throw std::runtime_error("Redis 查询失败");
    }
    std::string result = reply->str ? reply->str : "";
    freeReplyObject(reply);
    return result;
}

void RedisClient::set(const std::string& key, const std::string& value) {
    redisReply* reply = (redisReply*)redisCommand(redisContext, "SET %s %s", key.c_str(), value.c_str());
    if (!reply) {
        throw std::runtime_error("Redis 存储失败");
    }
    freeReplyObject(reply);
}
