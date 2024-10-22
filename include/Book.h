#ifndef BOOK_H
#define BOOK_H
#include<string>
class Book {
public:
    int id;
    std::string title;
    std::string author;
    std::string isbn;
    int yearPublished;
    int copiesAvailable;
    
    Book(int id, const std::string& title, const std::string& author, const std::string& isbn, int yearPublished, int copiesAvailable)
        : id(id), title(title), author(author), isbn(isbn), yearPublished(yearPublished), copiesAvailable(copiesAvailable) {}
};
#endif // BOOK_H