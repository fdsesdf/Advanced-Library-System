#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
public:
    // 构造函数
    Book(int id, const std::string& title, const std::string& author, const std::string& isbn, int yearPublished, int copiesAvailable);
    Book();
    // 获取书籍ID
    int getId() const;

    // 获取书名
    std::string getTitle() const;

    // 获取作者
    std::string getAuthor() const;

    // 获取ISBN
    std::string getIsbn() const;

    // 获取出版年份
    int getYearPublished() const;

    // 获取可用副本数
    int getCopiesAvailable() const;

    // 设置书名
    void setTitle(const std::string& title);

    // 设置作者
    void setAuthor(const std::string& author);

    // 设置ISBN
    void setIsbn(const std::string& isbn);

    // 设置出版年份
    void setYearPublished(int year);

    // 设置可用副本数
    void setCopiesAvailable(int copies);

public:
    int id;                    // 书籍ID
    std::string title;        // 书名
    std::string author;       // 作者
    std::string isbn;         // ISBN
    int yearPublished;         // 出版年份
    int copiesAvailable;       // 可用副本数
};

#endif // BOOK_H
