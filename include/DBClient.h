#ifndef DB_CLIENT_H
#define DB_CLIENT_H

#include "Book.h"
#include <vector>

class DBClient {
public:
    DBClient();
    bool insertBook(const Book& book);
    bool deleteBook(int bookId);
    bool updateBook(int bookId, const Book& updatedBook);
    Book queryBookById(int bookId);
    Book findBookByTitle(const std::string& title);  // 确保声明此方法
    std::vector<Book> queryAllBooks();
};

#endif // DB_CLIENT_H
