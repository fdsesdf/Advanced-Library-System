#include <iostream>
#include <string>
#include <vector>
#include <sstream>   // 为 std::ostringstream 提供支持
#include <iomanip>   // 为 std::setw 和 std::setfill 提供支持
#include <openssl/sha.h>  // 包含 SHA256 哈希函数
#include "user.h"      // User 类的头文件
#include "user_management.h"

std::string UserManagement::hashPassword(const std::string& password) {
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256(reinterpret_cast<const unsigned char*>(password.c_str()), password.size(), hash);
    
    std::ostringstream oss;
    for (int i = 0; i < SHA256_DIGEST_LENGTH; i++) {
        oss << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(hash[i]);
    }
    return oss.str(); // 返回哈希字符串
}

// 注册用户
bool UserManagement::registerUser(const std::string& username, const std::string& password, const std::string& role) {
    std::string passwordHash = hashPassword(password); // 使用哈希密码
    // 检查用户名是否已存在
    for (const auto& user : users) {
        if (user.getUsername() == username) {
            return false; // 用户已存在
        }
    }
    // 添加新用户
    users.emplace_back(username, passwordHash, role);
    return true;
}

// 登录用户
bool UserManagement::login(const std::string& username, const std::string& password) {
    std::string passwordHash = hashPassword(password); // 使用哈希密码
    for (const auto& user : users) {
        if (user.getUsername() == username && user.getPasswordHash() == passwordHash) {
            return true; // 登录成功
        }
    }
    return false; // 登录失败
}
