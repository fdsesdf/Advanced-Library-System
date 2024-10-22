#include "user.h"

User::User(const std::string& username, const std::string& passwordHash,const std::string& role)
    : username(username), passwordHash(passwordHash),role(role){}

User::User(const std::string& username, const std::string& passwordHash)
    : username(username), passwordHash(passwordHash){}

std::string User::getUsername() const {
    return username;
}

std::string User::getPasswordHash() const {
    return passwordHash;
}
