#include "database.h"
#include <mysql/mysql.h>
#include <iostream>
#include <stdexcept>
#include "Book.h"
Database::Database(const std::string& host, const std::string& user, const std::string& password, const std::string& dbname) {
    conn = mysql_init(nullptr);
    if (conn == nullptr) {
        throw std::runtime_error("mysql_init() failed");
    }

    if (mysql_real_connect(conn, host.c_str(), user.c_str(), password.c_str(), dbname.c_str(), 0, nullptr, 0) == nullptr) {
        mysql_close(conn);
        throw std::runtime_error("mysql_real_connect() failed: " + std::string(mysql_error(conn)));
    }
}

Database::~Database() {
    if (conn != nullptr) {
        mysql_close(conn);
    }
}

void Database::executeQuery(const std::string& query) {
    if (mysql_query(conn, query.c_str())) {
        throw std::runtime_error("mysql_query() failed: " + std::string(mysql_error(conn)));
    }
}

std::string Database::fetchResult(const std::string& query) {
    if (mysql_query(conn, query.c_str())) {
        throw std::runtime_error("mysql_query() failed: " + std::string(mysql_error(conn)));
    }

    MYSQL_RES* res = mysql_store_result(conn);
    if (res == nullptr) {
        throw std::runtime_error("mysql_store_result() failed: " + std::string(mysql_error(conn)));
    }

    MYSQL_ROW row = mysql_fetch_row(res);
    std::string result;
    if (row != nullptr) {
        result = row[0] ? row[0] : "NULL"; // 假设我们只获取第一列的数据
    }

    mysql_free_result(res);
    return result;
}

void Database::addBook(const std::string& title, const std::string& author, const std::string& isbn, int yearPublished, int copiesAvailable) {
    std::string query = "INSERT INTO books (title, author, isbn, year_published, copies_available) VALUES ('" +
                        title + "', '" + author + "', '" + isbn + "', " + std::to_string(yearPublished) + ", " + std::to_string(copiesAvailable) + ")";
    executeQuery(query);
}

void Database::deleteBook(int id) {
    std::string query = "DELETE FROM books WHERE id = " + std::to_string(id);
    executeQuery(query);
}

void Database::updateBook(int id, const std::string& title, const std::string& author, const std::string& isbn, int yearPublished, int copiesAvailable) {
    std::string query = "UPDATE books SET title = '" + title + "', author = '" + author +
                        "', isbn = '" + isbn + "', year_published = " + std::to_string(yearPublished) +
                        ", copies_available = " + std::to_string(copiesAvailable) + " WHERE id = " + std::to_string(id);
    executeQuery(query);
}

Book Database::queryBookByISBN(const std::string& isbn) {
    // 创建 SQL 查询语句
    std::string query = "SELECT id, title, author, year_published, copies_available FROM books WHERE isbn = '" + isbn + "'";
    
    // 执行查询
    executeQuery(query);
    
    // 获取查询结果
    MYSQL_RES* res = mysql_store_result(conn);
    if (res == nullptr) {
        throw std::runtime_error("mysql_store_result() failed: " + std::string(mysql_error(conn)));
    }

    // 从结果集中获取一行
    MYSQL_ROW row = mysql_fetch_row(res);
    Book book;
    
    if (row != nullptr) {
        // 从行中获取数据并赋值给 book 对象
        book.id = std::stoi(row[0]); // 获取书籍 ID
        book.title = row[1] ? row[1] : "NULL"; // 获取书籍标题
        book.author = row[2] ? row[2] : "NULL"; // 获取书籍作者
        book.yearPublished = row[3] ? std::stoi(row[3]) : 0; // 获取出版年份
        book.copiesAvailable = row[4] ? std::stoi(row[4]) : 0; // 获取可用副本数量
    } else {
        book.id = -1; // 如果未找到书籍，设置 ID 为 -1
    }

    // 释放结果集内存
    mysql_free_result(res);
    
    // 返回 Book 对象
    return book;
}

MYSQL* Database::getConnection() {
    return conn;
}