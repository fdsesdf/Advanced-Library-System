#include "UserManagement.h"

User::User(const std::string& username, const std::string& passwordHash)
    : username(username), passwordHash(passwordHash) {}

std::string User::getUsername() const {
    return username;
}

std::string User::getPasswordHash() const {
    return passwordHash;
}

void User::setPasswordHash(const std::string& newPasswordHash) {
    passwordHash = newPasswordHash;
}
