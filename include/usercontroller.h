#ifndef USERCONTROLLER_H
#define USERCONTROLLER_H

#include "User.h"
#include <string>
#include <unordered_map>

class UserController {
public:
    UserController();
    
    bool registerUser(const std::string& username, const std::string& password);
    bool loginUser(const std::string& username, const std::string& password);
    
private:
    std::unordered_map<std::string, User> users; // 存储用户信息
    std::string hashPassword(const std::string& password); // 密码哈希方法
};

#endif // USERCONTROLLER_H
