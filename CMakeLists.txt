cmake_minimum_required(VERSION 3.10)

# 项目信息
project(Advanced-Library-System VERSION 1.0)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_PREFIX_PATH "-I/usr/include/mariadb/mysql")
set(MYSQL_INCLUDE_DIR "/usr/include/mysql")
set(MYSQL_LIBRARY_DIR "/usr/lib/x86_64-linux-gnu")

# 查找必要的库
find_package(Qt5Widgets REQUIRED)
find_library(MYSQL_LIBRARIES NAMES mysqlclient HINTS ${MYSQL_LIBRARY_DIR})
find_package(Boost REQUIRED)
find_package(Threads REQUIRED)
find_package(OpenSSL REQUIRED)

# 包含头文件
include_directories(include)
include_directories(${MYSQL_INCLUDE_DIR})
include_directories(${OPENSSL_INCLUDE_DIR})

# 添加链接库目录
link_directories(${MYSQL_LIBRARY_DIR})

# 添加源文件
add_executable(Advanced-Library-System
    src/main.cpp
    src/user_management.cpp
    src/book_management.cpp
    src/database.cpp
    src/logger.cpp
    src/DBClient.cpp
    src/usercontroller.cpp
)

# 链接必要的库
target_link_libraries(Advanced-Library-System Qt5::Widgets ${Boost_LIBRARIES} mysqlclient pthread)
target_link_libraries(Advanced-Library-System hiredis)
target_link_libraries(Advanced-Library-System ${OPENSSL_LIBRARIES})
