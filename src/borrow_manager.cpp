#include "borrow_manager.h"

// 借阅图书的实现
void BorrowManager::borrowBook(int userId, int bookId) {
    MYSQL* conn = database->getConnection(); // 获取数据库连接

    // 检查用户是否存在
    std::string checkUserQuery = "SELECT * FROM users WHERE id = " + std::to_string(userId);
    if (mysql_query(conn, checkUserQuery.c_str())) {
        throw std::runtime_error("Failed to execute query: " + std::string(mysql_error(conn)));
    }

    MYSQL_RES* res = mysql_store_result(conn);
    if (mysql_num_rows(res) == 0) {
        mysql_free_result(res);
        throw std::runtime_error("User not found.");
    }
    mysql_free_result(res);

    // 检查图书是否可借
    std::string checkBookQuery = "SELECT copies_available FROM books WHERE id = " + std::to_string(bookId);
    if (mysql_query(conn, checkBookQuery.c_str())) {
        throw std::runtime_error("Failed to execute query: " + std::string(mysql_error(conn)));
    }

    res = mysql_store_result(conn);
    if (mysql_num_rows(res) == 0) {
        mysql_free_result(res);
        throw std::runtime_error("Book not found.");
    }

    MYSQL_ROW row = mysql_fetch_row(res);
    int copiesAvailable = std::stoi(row[0]);
    mysql_free_result(res);

    if (copiesAvailable <= 0) {
        throw std::runtime_error("No copies available to borrow.");
    }

    // 更新图书数量
    std::string updateBookQuery = "UPDATE books SET copies_available = copies_available - 1 WHERE id = " + std::to_string(bookId);
    if (mysql_query(conn, updateBookQuery.c_str())) {
        throw std::runtime_error("Failed to execute query: " + std::string(mysql_error(conn)));
    }

    // 插入借阅记录
    std::string insertBorrowQuery = "INSERT INTO borrow_history (user_id, book_id) VALUES (" + std::to_string(userId) + ", " + std::to_string(bookId) + ")";
    if (mysql_query(conn, insertBorrowQuery.c_str())) {
        throw std::runtime_error("Failed to execute query: " + std::string(mysql_error(conn)));
    }

    std::cout << "Book borrowed successfully!" << std::endl;
}

// 归还图书的实现
void BorrowManager::returnBook(int userId, int bookId) {
    MYSQL* conn = database->getConnection(); // 获取数据库连接

    // 检查借阅记录是否存在
    std::string checkBorrowQuery = "SELECT * FROM borrow_history WHERE user_id = " + std::to_string(userId) + " AND book_id = " + std::to_string(bookId);
    if (mysql_query(conn, checkBorrowQuery.c_str())) {
        throw std::runtime_error("Failed to execute query: " + std::string(mysql_error(conn)));
    }

    MYSQL_RES* res = mysql_store_result(conn);
    if (mysql_num_rows(res) == 0) {
        mysql_free_result(res);
        throw std::runtime_error("No borrow record found.");
    }
    mysql_free_result(res);

    // 更新图书数量
    std::string updateBookQuery = "UPDATE books SET copies_available = copies_available + 1 WHERE id = " + std::to_string(bookId);
    if (mysql_query(conn, updateBookQuery.c_str())) {
        throw std::runtime_error("Failed to execute query: " + std::string(mysql_error(conn)));
    }

    // 删除借阅记录
    std::string deleteBorrowQuery = "DELETE FROM borrow_history WHERE user_id = " + std::to_string(userId) + " AND book_id = " + std::to_string(bookId);
    if (mysql_query(conn, deleteBorrowQuery.c_str())) {
        throw std::runtime_error("Failed to execute query: " + std::string(mysql_error(conn)));
    }

    std::cout << "Book returned successfully!" << std::endl;
}
