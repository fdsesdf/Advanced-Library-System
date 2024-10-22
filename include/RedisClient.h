#ifndef REDIS_CLIENT_H
#define REDIS_CLIENT_H

#include <string>

class RedisClient {
public:
    std::string get(const std::string& key);
    void set(const std::string& key, const std::string& value);
};

#endif // REDIS_CLIENT_H
