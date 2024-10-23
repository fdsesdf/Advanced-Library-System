#ifndef BOOKCONTROLLER_H
#define BOOKCONTROLLER_H

#include <string>
#include <vector>
#include "Book.h"
#include "DBClient.h"
class BookController {
public:
    // 添加图书
    bool addBook(const Book& book);

    // 删除图书
    bool removeBook(int bookId);

    // 更新图书
    bool updateBook(int bookId, const Book& updatedBook);

    // 根据ID获取图书
    Book getBookById(int bookId);

    // 获取所有图书
    std::vector<Book> getAllBooks();

    // 根据标题查找图书
    Book findBookByTitle(const std::string& title);
private:
    User currentUser;       // 当前用户
    DBClient& dbClient; 
};

#endif // BOOKCONTROLLER_H
