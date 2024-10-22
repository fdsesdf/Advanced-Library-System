// user_management.h
#ifndef USER_MANAGEMENT_H
#define USER_MANAGEMENT_H

#include <string> // 确保包含了 string 头文件

class User {
public:
    User(const std::string& username, const std::string& passwordHash);
    
    std::string getUsername() const;
    std::string getPasswordHash() const;
    void setPasswordHash(const std::string& newPasswordHash);

private:
    std::string username;     // 用户名
    std::string passwordHash; // 密码哈希
};

#endif // USER_MANAGEMENT_H
