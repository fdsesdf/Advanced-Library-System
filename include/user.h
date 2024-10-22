#ifndef USER_H
#define USER_H

#include <string>

class User {
public:
    User(const std::string& username, const std::string& passwordHash,const std::string& role);
    User(const std::string& username, const std::string& passwordHash);
    User() = default;
    std::string getUsername() const;
    std::string getPasswordHash() const;
    std::string getRole() const { return role; }
private:
    std::string username;
    std::string passwordHash;
    std::string role;
};

#endif // USER_H
