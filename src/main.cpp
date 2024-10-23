#include <iostream>
#include "usercontroller.h"

int main() {
    UserController userController;
    std::string username, password;

    int choice;
    std::cout << "欢迎使用图书管理系统" << std::endl;
    std::cout << "请选择操作: 1. 注册  2. 登录" << std::endl;
    std::cin >> choice;

    if (choice == 1) {
    std::cout << "请输入用户名进行注册: ";
    std::cin >> username;
    std::cout << "请输入密码进行注册: ";
    std::cin >> password;

    try {
        if (userController.registerUser(username, password, "user")) {
            std::cout << "注册成功！" << std::endl;
        } else {
            std::cout << "注册失败。" << std::endl;
        }
    } catch (const std::exception& ex) {
        std::cerr << "注册时出错: " << ex.what() << std::endl;
    }
} else if (choice == 2) {
    std::cout << "请输入用户名登录: ";
    std::cin >> username;
    std::cout << "请输入密码登录: ";
    std::cin >> password;

    try {
        if (userController.loginUser(username, password)) {
            std::cout << "登录成功！" << std::endl;
        } else {
            std::cout << "登录失败，用户名或密码错误。" << std::endl;
        }
    } catch (const std::exception& ex) {
        std::cerr << "登录时出错: " << ex.what() << std::endl;
    }
}else {
        std::cerr << "无效的选择" << std::endl;
    }

    return 0;
}
