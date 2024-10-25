#ifndef DATABASE_H
#define DATABASE_H

#include <mysql/mysql.h>
#include <string>
#include "Book.h"
class Database {
public:
    // 构造函数
    Database(const std::string& host, const std::string& user, const std::string& password, const std::string& dbname);
    
    // 析构函数
    ~Database();

    // 添加书籍
    void addBook(const std::string& title, const std::string& author, const std::string& isbn, int yearPublished, int copiesAvailable);
    
    // 删除书籍
    void deleteBook(int id);
    
    // 更新书籍信息
    void updateBook(int id, const std::string& title, const std::string& author, const std::string& isbn, int yearPublished, int copiesAvailable);
    
    // 返回 MySQL 数据库连接
    MYSQL* getConnection();
    // 根据ISBN查询书籍
    Book queryBookByISBN(const std::string& isbn);
private:
    // 执行SQL查询
    void executeQuery(const std::string& query);
    
    // 获取查询结果
    std::string fetchResult(const std::string& query);

    MYSQL* conn;  // MySQL连接指针
};

#endif // DATABASE_H
