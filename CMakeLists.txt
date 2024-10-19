cmake_minimum_required(VERSION 3.10)

# 项目信息
project(LibraryManagementSystem VERSION 1.0)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_PREFIX_PATH "-I/usr/include/mariadb/mysql")

# 查找必要的库
find_package(Qt5Widgets REQUIRED)
find_package(MySQL REQUIRED)
find_package(Boost REQUIRED)
find_package(Threads REQUIRED)

# 添加源文件
add_executable(LibraryManagementSystem
    src/main.cpp
    src/user_management.cpp
    src/book_management.cpp
    src/database.cpp
    src/logger.cpp
)

# 链接必要的库
target_link_libraries(LibraryManagementSystem Qt5::Widgets ${Boost_LIBRARIES} mysqlclient pthread)

