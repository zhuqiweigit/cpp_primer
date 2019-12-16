#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
#include <iostream>
using std::istream; using std::ostream;
class Sales_data{
private:
    std::string bookNo;
    unsigned units_sold = 0;
    double sum = 0;
public:
    Sales_data() = default;
    Sales_data(const std::string &s):bookNo(s){};
    Sales_data(const std::string &s, unsigned u, double sum): bookNo(s), units_sold(u), sum(sum){};
    Sales_data(std::istream &is){
        is >> bookNo >> units_sold >> sum;
    }
    std::string isbn() const{ return bookNo;}
    Sales_data & conbine(const Sales_data& );

    friend Sales_data add(const Sales_data &a, const Sales_data &b);
    friend std::istream& read(std::istream &is, Sales_data &data);
    friend ostream& print(ostream &os, const Sales_data& data);

};
Sales_data& Sales_data::conbine(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    sum += rhs.sum;
    return *this;
}
Sales_data add(const Sales_data &a, const Sales_data &b){
    Sales_data sum = a;
    return sum.conbine(b);
}

std::istream& read(std::istream &is, Sales_data &data){
    is >> data.bookNo >> data.units_sold >> data.sum;
    return is;
}
ostream& print(ostream &os, const Sales_data& data){
    os << data.bookNo << " " << data.units_sold << " " << data.sum;
    return  os;
}
#endif