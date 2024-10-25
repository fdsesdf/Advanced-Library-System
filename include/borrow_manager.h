#ifndef BORROW_MANAGER_H
#define BORROW_MANAGER_H

#include <iostream>
#include <stdexcept>
#include <mysql/mysql.h>
#include "database.h" // 确保引用数据库类的头文件

class BorrowManager {
public:
    // 构造函数，接受数据库连接
    BorrowManager(Database* db) : database(db) {}

    // 借阅图书
    void borrowBook(int userId, int bookId);

    // 归还图书
    void returnBook(int userId, int bookId);

private:
    Database* database; // 数据库连接
};

#endif // BORROW_MANAGER_H
