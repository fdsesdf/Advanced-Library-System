#ifndef USER_H
#define USER_H

#include <string>

class User {
public:
    User(const std::string& username, const std::string& passwordHash);
    
    std::string getUsername() const;
    std::string getPasswordHash() const;

private:
    std::string username;
    std::string passwordHash;
};

#endif // USER_H
