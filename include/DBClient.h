#ifndef DB_CLIENT_H
#define DB_CLIENT_H

#include "Book.h"
#include <vector>
#include <mysql/mysql.h>
class DBClient {
public:
    DBClient();
    ~DBClient();
    bool insertBook(const Book& book);
    bool deleteBook(int bookId);
    bool updateBook(int bookId, const Book& updatedBook);
    Book queryBookById(int bookId);
    Book findBookByTitle(const std::string& title);  // 确保声明此方法
    std::vector<Book> queryAllBooks();
private:
    MYSQL* conn;
};

#endif // DB_CLIENT_H
