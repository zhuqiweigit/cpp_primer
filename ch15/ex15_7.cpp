#include <iostream>
#include <string>
#include "Quote.h"

double printTotal(std::ostream &os, const Quote& item, std::size_t n){
    double total = item.net_price(n);
    os << "book " << item.isbn() << " sold " << n << ", total price " << total;
    return total;
}


int main(){
    My_quote c("no.0002", 11.001, 2, 0.9, 10);
    printTotal(std::cout, c, 1);
    std::cout << std::endl;
    printTotal(std::cout, c, 3);
    std::cout << std::endl;
    printTotal(std::cout, c, 10);
    std::cout << std::endl;
    printTotal(std::cout, c, 11);
    return 0;
}