#include <iostream>
#include "book_management.h"
#include "borrow_manager.h"
#include "database.h" // 确保引用数据库类的头文件
int main() {
    Database db("localhost", "root", "MyNewP@ssw0rd!", "library"); // 创建数据库对象
    BorrowManager borrowManager(&db); // 创建借阅管理对象
    BookManager bookManager;
    int choice;

    do {
        // 显示菜单选项
        std::cout << "Welcome to the Advanced Library System" << std::endl;
        std::cout << "Please choose an option:" << std::endl;
        std::cout << "1. Add Book" << std::endl;
        std::cout << "2. Delete Book" << std::endl;
        std::cout << "3. Update Book" << std::endl;
        std::cout << "4. Query Book" << std::endl;
        std::cout << "5. Borrow Book" << std::endl;
        std::cout << "6. Return Book" << std::endl;
        std::cout << "7. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                bookManager.addBook();
                break;
            case 2:
                bookManager.deleteBook();
                break;
            case 3:
                bookManager.updateBook();
                break;
            case 4:
                bookManager.queryBook();
                break;
            case 5: {
                int userId, bookId;
                std::cout << "Enter User ID: ";
                std::cin >> userId;
                std::cout << "Enter Book ID: ";
                std::cin >> bookId;
                borrowManager.borrowBook(userId, bookId);
                break;
            }
            case 6: {
                int userId, bookId;
                std::cout << "Enter User ID: ";
                std::cin >> userId;
                std::cout << "Enter Book ID: ";
                std::cin >> bookId;
                borrowManager.returnBook(userId, bookId);
                break;
            }
            case 7:
                std::cout << "Exiting the program. Goodbye!" << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
        }
        
        std::cout << std::endl; // 添加一个换行以提升可读性
    } while (choice != 7);

    return 0;
}
