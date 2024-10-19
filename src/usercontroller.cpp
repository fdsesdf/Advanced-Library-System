#include "usercontroller.h"
#include <openssl/sha.h>
#include <iomanip>
#include <sstream>

UserController::UserController() {}

bool UserController::registerUser(const std::string& username, const std::string& password) {
    if (users.find(username) != users.end()) {
        return false; // 用户已存在
    }
    
    std::string passwordHash = hashPassword(password);
    users[username] = User(username, passwordHash);
    return true; // 注册成功
}

bool UserController::loginUser(const std::string& username, const std::string& password) {
    auto it = users.find(username);
    if (it == users.end()) {
        return false; // 用户不存在
    }
    
    return it->second.getPasswordHash() == hashPassword(password); // 检查密码
}

std::string UserController::hashPassword(const std::string& password) {
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256(reinterpret_cast<const unsigned char*>(password.c_str()), password.size(), hash);
    
    std::stringstream ss;
    for (int i = 0; i < SHA256_DIGEST_LENGTH; ++i) {
        ss << std::setw(2) << std::setfill('0') << static_cast<int>(hash[i]);
    }
    
    return ss.str();
}
