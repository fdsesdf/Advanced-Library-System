#include "bookcontroller.h"
#include "RedisClient.h"
#include "DBClient.h"
#include <stdexcept>

// 假设 RedisClient 和 DBClient 类已实现
extern RedisClient redisClient;
extern DBClient dbClient;

bool BookController::addBook(const Book& book) {
    // 添加书籍逻辑
    return dbClient.insertBook(book);
}

bool BookController::removeBook(int bookId) {
    // 移除书籍逻辑
    return dbClient.deleteBook(bookId);
}

bool BookController::updateBook(int bookId, const Book& updatedBook) {
    // 更新书籍逻辑
    return dbClient.updateBook(bookId, updatedBook);
}

Book BookController::getBookById(int bookId) {
    std::string redisKey = "book:" + std::to_string(bookId);
    
    // 先查询Redis缓存
    std::string cachedBook = redisClient.get(redisKey);
    if (!cachedBook.empty()) {
        // 解析缓存中的数据为Book对象并返回
        return parseBook(cachedBook); 
    }

    // 缓存不存在则查询MySQL数据库
    Book book = dbClient.queryBookById(bookId);
    
    // 查询结果存储到Redis中
    redisClient.set(redisKey, serializeBook(book));
    
    return book;
}

std::vector<Book> BookController::getAllBooks() {
    // 返回所有书籍
    return dbClient.queryAllBooks();
}
