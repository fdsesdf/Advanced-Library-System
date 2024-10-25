cmake_minimum_required(VERSION 3.10)

# 项目信息
project(Advanced-Library-System VERSION 1.0)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 设置路径
set(MYSQL_INCLUDE_DIR "/usr/include/mysql")
set(MYSQL_LIBRARY_DIR "/usr/lib/x86_64-linux-gnu")
set(HIREDIS_INCLUDE_DIR "/usr/include/hiredis")
set(HIREDIS_LIB_DIR "/usr/lib/x86_64-linux-gnu")

# 查找必要的库
find_package(Qt5Widgets REQUIRED)
find_library(MYSQL_LIBRARIES NAMES mysqlclient HINTS ${MYSQL_LIBRARY_DIR})
find_package(Boost REQUIRED)
find_package(Threads REQUIRED)
find_package(OpenSSL REQUIRED)
find_package(nlohmann_json 3.2.0 REQUIRED)


# 包含头文件
include_directories(include)
include_directories(${MYSQL_INCLUDE_DIR})
include_directories(${OPENSSL_INCLUDE_DIR})
include_directories("/usr/include/nlohmann")
include_directories("/usr/include/hiredis")
include_directories("/usr/local/include/sw")
include_directories(${HIREDIS_INCLUDE_DIR})
include_directories(${Redis++_INCLUDE_DIRS})

# 添加链接库目录
link_directories(${MYSQL_LIBRARY_DIR})
link_directories(${HIREDIS_LIB_DIR})

# 添加源文件
add_executable(Advanced-Library-System
    src/main.cpp
    src/user_management.cpp
    src/book_management.cpp
    src/database.cpp
    src/logger.cpp
    src/DBClient.cpp
    src/usercontroller.cpp
    src/Book.cpp
    src/User.cpp
    src/RedisCache.cpp
    src/RedisClient.cpp
    src/borrow_manager.cpp
)

# 链接必要的库
target_link_libraries(Advanced-Library-System Qt5::Widgets ${Boost_LIBRARIES} mysqlclient pthread)
target_link_libraries(Advanced-Library-System ${OPENSSL_LIBRARIES})
target_link_libraries(Advanced-Library-System nlohmann_json::nlohmann_json)
target_link_libraries(Advanced-Library-System ${HIREDIS_LIBRARIES} ${Redis++_LIBRARIES})
target_link_libraries(Advanced-Library-System 
    "/usr/lib/x86_64-linux-gnu/libhiredis.so"
    "/usr/local/lib/libredis++.so"
)
