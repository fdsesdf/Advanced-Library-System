#include "user.h"

User::User(const std::string& username, const std::string& passwordHash, const std::string& role)
    : username(username), passwordHash(passwordHash), role(role) {}

User::User(const std::string& username, const std::string& passwordHash)
    : username(username), passwordHash(passwordHash), role("user") {} // 默认角色

std::string User::getUsername() const {
    return username;
}

std::string User::getPasswordHash() const {
    return passwordHash;
}

std::string User::getRole() const {
    return role;
}
