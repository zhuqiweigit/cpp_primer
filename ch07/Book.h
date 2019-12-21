#ifndef BOOK_H
#define BOOK_H
#include <string>
class Book{
private:
    std::string isbn;
    std::string author;
    double price;
public:
    Book(std::string isbn, std::string author, double price):isbn(isbn), author(author), price(price){}
    Book(double price):Book("-", "-", price){}
};
#endif