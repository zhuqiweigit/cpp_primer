#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <iostream>
#include <string>
class SalesData{
    friend std::istream& operator >>(std::istream&, SalesData&);
    friend std::ostream& operator<<(std::ostream&, SalesData&);
    friend SalesData operator+(const SalesData&, const SalesData&);
private:
    std::string bookNo;
    unsigned unitSold = 0;
    double sum = 0.0;
    SalesData& operator+=(const SalesData &);
    SalesData& operator+(const SalesData &);
public:
    SalesData(const std::string &bookNo, unsigned unitSold, double sum):bookNo(bookNo), unitSold(unitSold), sum(sum){ }
    SalesData(const std::string &bookNo):SalesData(bookNo, 0, 0){}

public:
    explicit operator std::string()const { return bookNo;}
    explicit operator double()const {return sum;}
};

std::istream& operator >>(std::istream& is, SalesData& indata){
    is >> indata.bookNo >> indata.unitSold >> indata.sum;
    return is;
}

std::ostream& operator<<(std::ostream& os, SalesData& outdata){
    os << outdata.bookNo << " " <<outdata.unitSold << " " << outdata.sum;
    return os;
}
SalesData operator+(const SalesData& lhs, const SalesData& rhs){
    SalesData tmp = lhs;
    tmp.sum += rhs.sum;
    return tmp;
}

SalesData& SalesData::operator+=(const SalesData & rhs) {
    sum += rhs.sum;
}
SalesData& SalesData::operator+(const SalesData & rhs) {
    SalesData tmp = rhs;
    tmp += *this;
    return tmp;
}

#endif