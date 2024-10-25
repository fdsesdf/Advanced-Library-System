#ifndef BOOKMANAGER_H
#define BOOKMANAGER_H
class BookManager {
public:
    // 显示菜单
    void menu();

    // 添加图书
    void addBook();

    // 删除图书
    void deleteBook();

    // 修改图书
    void updateBook();

    // 查询图书
    void queryBook();
};

#endif // BOOKMANAGER_H
