#ifndef USER_MANAGEMENT_H
#define USER_MANAGEMENT_H

#include <string>
#include <vector>
#include "user.h"

class UserManagement {
public:
    // 添加用户
    bool registerUser(const std::string& username, const std::string& passwordHash, const std::string& role);
    
    // 登录用户
    bool login(const std::string& username, const std::string& passwordHash);
    
    // 获取所有用户
    std::vector<User> getAllUsers() const;

private:
    std::vector<User> users; // 存储用户列表
    std::string hashPassword(const std::string& password);
};

#endif // USER_MANAGEMENT_H
