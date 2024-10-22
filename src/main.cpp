#include <iostream>
#include "usercontroller.h"

int main() {
    UserController userController;

    // 注册用户
    if (userController.registerUser("testuser", "mypassword")) {
        std::cout << "用户注册成功！" << std::endl;
    } else {
        std::cout << "用户注册失败！" << std::endl;
    }

    // 登录用户
    if (userController.loginUser("testuser", "mypassword")) {
        std::cout << "用户登录成功！" << std::endl;
    } else {
        std::cout << "用户登录失败！" << std::endl;
    }
    
    return 0;
}
