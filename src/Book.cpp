#include "Book.h"

// 构造函数
Book::Book(int id, const std::string& title, const std::string& author, const std::string& isbn, int yearPublished, int copiesAvailable)
    : id(id), title(title), author(author), isbn(isbn), yearPublished(yearPublished), copiesAvailable(copiesAvailable) {}
Book::Book() : id(0), title(""), author(""), isbn(""), yearPublished(0), copiesAvailable(0) {}
// 获取书籍ID
int Book::getId() const {
    return id;
}

// 获取书名
std::string Book::getTitle() const {
    return title;
}

// 获取作者
std::string Book::getAuthor() const {
    return author;
}

// 获取ISBN
std::string Book::getIsbn() const {
    return isbn;
}

// 获取出版年份
int Book::getYearPublished() const {
    return yearPublished;
}

// 获取可用副本数
int Book::getCopiesAvailable() const {
    return copiesAvailable;
}

// 设置书名
void Book::setTitle(const std::string& title) {
    this->title = title;
}

// 设置作者
void Book::setAuthor(const std::string& author) {
    this->author = author;
}

// 设置ISBN
void Book::setIsbn(const std::string& isbn) {
    this->isbn = isbn;
}

// 设置出版年份
void Book::setYearPublished(int year) {
    this->yearPublished = year;
}

// 设置可用副本数
void Book::setCopiesAvailable(int copies) {
    this->copiesAvailable = copies;
}
