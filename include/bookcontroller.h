#ifndef BOOK_CONTROLLER_H
#define BOOK_CONTROLLER_H

#include "Book.h"
#include <vector>
#include <string>
#include "DBClient.h"
#include "user.h"
class BookController {
public:
    BookController(DBClient& db, const User& user) : dbClient(db), currentUser(user) {}
    bool addBook(const Book& book);
    bool removeBook(int bookId);
    bool updateBook(int bookId, const Book& updatedBook);
    Book getBookById(int bookId);
    std::vector<Book> getAllBooks();
private:
    User currentUser;       // 当前用户
    DBClient& dbClient; // 引用数据库客户端
};

#endif // BOOK_CONTROLLER_H
