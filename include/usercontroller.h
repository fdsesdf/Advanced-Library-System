#ifndef USER_CONTROLLER_H
#define USER_CONTROLLER_H

#include <string>
#include <unordered_map>
#include "user.h"
#include "DBClient.h"

class UserController {
public:
    UserController();

    // 注册用户
    bool registerUser(const std::string& username, const std::string& password);

    // 用户登录
    bool loginUser(const std::string& username, const std::string& password);

    // 使用 Redis 存储用户会话
    void storeSession(const std::string& sessionId, const User& user);

    // 获取 Redis 中的用户会话
    User getSession(const std::string& sessionId);
    
    bool addBook(const Book& book);
    
    User currentUser;  // 登录后当前用户信息
    DBClient dbClient;
private:
    std::unordered_map<std::string, User> users; // 模拟数据库存储用户信息
    void connectToRedis(); // 连接 Redis
};

#endif // USER_CONTROLLER_H
