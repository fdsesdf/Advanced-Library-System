#include "database.h"
#include "book_management.h"
#include "Book.h"
#include <iostream>

    void BookManager::addBook() {
        std::string host = "localhost"; // 数据库主机
        std::string user = "root";      // 数据库用户
        std::string password = "MyNewP@ssw0rd!"; // 数据库密码
        std::string dbname = "library"; // 数据库名称

        Database db(host, user, password, dbname); // 创建Database实例

        // 获取书籍信息
        std::string title, author, isbn;
        int yearPublished, copiesAvailable;

        std::cout << "Enter book title: ";
        std::getline(std::cin, title);
        std::cout << "Enter book author: ";
        std::getline(std::cin, author);
        std::cout << "Enter book ISBN: ";
        std::getline(std::cin, isbn);
        std::cout << "Enter year published: ";
        std::cin >> yearPublished;
        std::cout << "Enter number of copies available: ";
        std::cin >> copiesAvailable;

        // 添加书籍到数据库
        try {
            db.addBook(title, author, isbn, yearPublished, copiesAvailable);
            std::cout << "Book added successfully." << std::endl;
        } catch (const std::runtime_error& e) {
            std::cout << "Error adding book: " << e.what() << std::endl;
        }
    }

    void BookManager::deleteBook() {
        std::string host = "localhost";
        std::string user = "root";
        std::string password = "MyNewP@ssw0rd!";
        std::string dbname = "library";

        Database db(host, user, password, dbname); // 创建Database实例

        int bookId;
        std::cout << "Enter book ID to delete: ";
        std::cin >> bookId;

        // 从数据库删除书籍
        try {
            db.deleteBook(bookId);
            std::cout << "Book deleted successfully." << std::endl;
        } catch (const std::runtime_error& e) {
            std::cout << "Error deleting book: " << e.what() << std::endl;
        }
    }

    void BookManager::updateBook() {
        std::string host = "localhost";
        std::string user = "root";
        std::string password = "MyNewP@ssw0rd!";
        std::string dbname = "library";

        Database db(host, user, password, dbname); // 创建Database实例

        int bookId;
        std::string title, author, isbn;
        int yearPublished, copiesAvailable;

        std::cout << "Enter book ID to update: ";
        std::cin >> bookId;

        std::cout << "Enter new book title: ";
        std::cin.ignore(); // 清空输入缓冲区
        std::getline(std::cin, title);
        std::cout << "Enter new book author: ";
        std::getline(std::cin, author);
        std::cout << "Enter new book ISBN: ";
        std::getline(std::cin, isbn);
        std::cout << "Enter new year published: ";
        std::cin >> yearPublished;
        std::cout << "Enter new number of copies available: ";
        std::cin >> copiesAvailable;

        // 更新书籍信息
        try {
            db.updateBook(bookId, title, author, isbn, yearPublished, copiesAvailable);
            std::cout << "Book updated successfully." << std::endl;
        } catch (const std::runtime_error& e) {
            std::cout << "Error updating book: " << e.what() << std::endl;
        }
    }

    void BookManager::queryBook() {
        std::string host = "localhost";
        std::string user = "root";
        std::string password = "MyNewP@ssw0rd!";
        std::string dbname = "library";

        Database db(host, user, password, dbname); // 创建Database实例

        std::string isbn;
        std::cout << "Enter book ISBN to query: ";
        std::cin.ignore(); // 清空输入缓冲区
        std::getline(std::cin, isbn);

        // 查询书籍信息
        try {
            Book book = db.queryBookByISBN(isbn);
            if (book.id != -1) {
                std::cout << "Book ID: " << book.id << std::endl;
                std::cout << "Title: " << book.title << std::endl;
                std::cout << "Author: " << book.author << std::endl;
                std::cout << "Year Published: " << book.yearPublished << std::endl;
                std::cout << "Copies Available: " << book.copiesAvailable << std::endl;
            } else {
                std::cout << "Book not found." << std::endl;
            }
        } catch (const std::runtime_error& e) {
            std::cout << "Error querying book: " << e.what() << std::endl;
        }
    }

