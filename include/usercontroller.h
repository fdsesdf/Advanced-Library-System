#ifndef USERCONTROLLER_H
#define USERCONTROLLER_H

#include <unordered_map>
#include <string>
#include "user.h" // 确保包含 User 类的头文件

class UserController {
public:
    UserController();

    // 注册用户
    bool registerUser(const std::string& username, const std::string& password, const std::string& role);

    // 登录用户
    bool loginUser(const std::string& username, const std::string& password);

    // 存储会话
    void storeSession(const std::string& sessionId, const User& user);

    // 获取会话
    User getSession(const std::string& sessionId);

private:
    // 用户信息存储
    std::unordered_map<std::string, User> users;

    // 连接到 Redis
    void connectToRedis();

    // 哈希密码
    std::string hashPassword(const std::string& password);
};

#endif // USERCONTROLLER_H
