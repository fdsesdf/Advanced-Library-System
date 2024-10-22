#include <hiredis/hiredis.h> // Redis 库
#include <iomanip> // 添加这个头文件
#include <iostream>
#include <openssl/evp.h> // 使用 EVP 接口
#include <openssl/sha.h>
#include <string>
#include <sstream>
#include "usercontroller.h" // 包含 UserController 的头文件
#include "bookcontroller.h"
UserController::UserController() {
    connectToRedis();
}
// 哈希密码
std::string hashPassword(const std::string& password) {
    EVP_MD_CTX* ctx = EVP_MD_CTX_new();
    unsigned char hash[SHA256_DIGEST_LENGTH];

    EVP_DigestInit_ex(ctx, EVP_sha256(), nullptr);
    EVP_DigestUpdate(ctx, password.c_str(), password.size());
    EVP_DigestFinal_ex(ctx, hash, nullptr);
    EVP_MD_CTX_free(ctx);

    std::stringstream ss;
    for (int i = 0; i < SHA256_DIGEST_LENGTH; ++i) {
        ss << std::hex << std::setw(2) << std::setfill('0') << (int)hash[i];
    }
    return ss.str();
}

// 注册用户
bool UserController::registerUser(const std::string& username, const std::string& password) {
    if (users.find(username) != users.end()) {
        std::cout << "User already exists!" << std::endl;
        return false;
    }

    std::string passwordHash = hashPassword(password);
    users[username] = User(username, passwordHash);
    std::cout << "User registered successfully!" << std::endl;
    return true;
}

// 登录用户
bool UserController::loginUser(const std::string& username, const std::string& password) {
    auto it = users.find(username);
    if (it == users.end()) {
        std::cout << "User not found!" << std::endl;
        return false;
    }

    std::string passwordHash = hashPassword(password);
    if (it->second.getPasswordHash() == passwordHash) {
        std::cout << "Login successful!" << std::endl;
        return true;
    }

    std::cout << "Incorrect password!" << std::endl;
    return false;
}

// 连接到 Redis
void UserController::connectToRedis() {
    redisContext *context = redisConnect("127.0.0.1", 6379);
    if (context == NULL || context->err) {
        if (context) {
            std::cout << "Redis connection error: " << context->errstr << std::endl;
        } else {
            std::cout << "Can't allocate redis context" << std::endl;
        }
    } else {
        std::cout << "Connected to Redis!" << std::endl;
    }
}

// 使用 Redis 存储会话
void UserController::storeSession(const std::string& sessionId, const User& user) {
    redisContext *context = redisConnect("127.0.0.1", 6379);
    if (context == NULL || context->err) {
        std::cout << "Redis connection failed!" << std::endl;
        return;
    }

    std::string command = "SET " + sessionId + " " + user.getUsername();
    redisReply *reply = (redisReply *)redisCommand(context, command.c_str());
    if (reply->type == REDIS_REPLY_STATUS && std::string(reply->str) == "OK") {
        std::cout << "Session stored successfully!" << std::endl;
    } else {
        std::cout << "Failed to store session!" << std::endl;
    }
    freeReplyObject(reply);
    redisFree(context);
}

// 获取 Redis 中的会话
User UserController::getSession(const std::string& sessionId) {
    redisContext *context = redisConnect("127.0.0.1", 6379);
    if (context == NULL || context->err) {
        std::cout << "Redis connection failed!" << std::endl;
        return User("", "");
    }

    redisReply *reply = (redisReply *)redisCommand(context, ("GET " + sessionId).c_str());
    if (reply->type == REDIS_REPLY_STRING) {
        std::string username = reply->str;
        freeReplyObject(reply);
        redisFree(context);
        return users[username]; // 从本地用户表中获取完整用户信息
    }

    freeReplyObject(reply);
    redisFree(context);
    return User("", "");
}
//带权限检查的addBook方法
bool BookController::addBook(const Book& book) {
    if (currentUser.getRole() != "admin") {
        throw std::runtime_error("权限不足：只有管理员可以添加图书");
    }
    // 添加书籍的逻辑
    return dbClient.insertBook(book);
}