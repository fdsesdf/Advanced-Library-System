#include "DBClient.h"    // 包含 DBClient 类的声明
#include "Book.h"        // 包含 Book 类的声明
#include <mysql/mysql.h> // MySQL 相关操作的库
#include <iostream>      // 用于输出调试信息
#include <stdexcept>     // 用于异常处理
#include <sstream>       // 用于字符串操作 (例如拼接 SQL 语句)
DBClient::DBClient() {
    conn = mysql_init(nullptr);
    if (conn == nullptr) {
        throw std::runtime_error("MySQL 初始化失败");
    }

    conn = mysql_real_connect(conn, "localhost", "root", "MyNewP@ssw0rd!", "library", 3306, nullptr, 0);
    if (conn == nullptr) {
        throw std::runtime_error("MySQL 连接失败");
    }
}

bool DBClient::insertBook(const Book& book) {
    std::stringstream query;
    query << "INSERT INTO books (title, author, isbn, year_published, copies_available) VALUES ('"
          << book.title << "', '" << book.author << "', '" << book.isbn << "', "
          << book.yearPublished << ", " << book.copiesAvailable << ")";
    
    if (mysql_query(conn, query.str().c_str())) {
        std::cerr << "插入书籍失败: " << mysql_error(conn) << std::endl;
        return false;
    }

    return true;
}

bool DBClient::deleteBook(int bookId) {
    std::stringstream query;
    query << "DELETE FROM books WHERE id = " << bookId;

    if (mysql_query(conn, query.str().c_str())) {
        std::cerr << "删除书籍失败: " << mysql_error(conn) << std::endl;
        return false;
    }

    return true;
}

bool DBClient::updateBook(int bookId, const Book& updatedBook) {
    std::stringstream query;
    query << "UPDATE books SET title = '" << updatedBook.title
          << "', author = '" << updatedBook.author
          << "', isbn = '" << updatedBook.isbn
          << "', year_published = " << updatedBook.yearPublished
          << ", copies_available = " << updatedBook.copiesAvailable
          << " WHERE id = " << bookId;
    
    if (mysql_query(conn, query.str().c_str())) {
        std::cerr << "更新书籍失败: " << mysql_error(conn) << std::endl;
        return false;
    }

    return true;
}

Book DBClient::queryBookById(int bookId) {
    std::stringstream query;
    query << "SELECT * FROM books WHERE id = " << bookId;

    if (mysql_query(conn, query.str().c_str())) {
        std::cerr << "查询书籍失败: " << mysql_error(conn) << std::endl;
        throw std::runtime_error("书籍查询失败");
    }

    MYSQL_RES *res = mysql_store_result(conn);
    MYSQL_ROW row = mysql_fetch_row(res);

    Book book;
    if (row) {
        book.id = std::stoi(row[0]);
        book.title = row[1];
        book.author = row[2];
        book.isbn = row[3];
        book.yearPublished = std::stoi(row[4]);
        book.copiesAvailable = std::stoi(row[5]);
    }

    mysql_free_result(res);
    return book;
}

std::vector<Book> DBClient::queryAllBooks() {
    std::vector<Book> books;
    std::string query = "SELECT * FROM books";

    if (mysql_query(conn, query.c_str())) {
        std::cerr << "查询所有书籍失败: " << mysql_error(conn) << std::endl;
        return books;
    }

    MYSQL_RES *res = mysql_store_result(conn);
    MYSQL_ROW row;

    while ((row = mysql_fetch_row(res))) {
        Book book;
        book.id = std::stoi(row[0]);
        book.title = row[1];
        book.author = row[2];
        book.isbn = row[3];
        book.yearPublished = std::stoi(row[4]);
        book.copiesAvailable = std::stoi(row[5]);
        books.push_back(book);
    }

    mysql_free_result(res);
    return books;
}

DBClient::~DBClient() {
    mysql_close(conn);
}
