#include <iostream>
#include <string>
#include "Quote.h"

double printTotal(std::ostream &os, const Quote& item, std::size_t n){
    double total = item.net_price(n);
    os << "book " << item.isbn() << " sold " << n << ", total price " << total;
    return total;
}


int main(){
    Quote a("no.0001", 12.587);
    Bulk_quote b("no.0002", 11.001, 2, 0.9);
    printTotal(std::cout, a, 3);
    std::cout << std::endl;
    printTotal(std::cout, b, 3);
    return 0;
}