#include <iostream>
#include "Sales_data.h"
using std::cin; using std::cout; using std::endl;
int main() {
    Sales_data data1, data2;
    double price;
    cin >> data1.bookNo >> data1.units_sold >> price;
    data1.sum = price * data1.units_sold;
    cin >> data2.bookNo >> data2.units_sold >> price;
    data2.sum = price * data2.units_sold;
    if(data1.bookNo == data2.bookNo){
        unsigned totalCnt = data1.units_sold + data2.units_sold;
        double sum = data1.sum + data2.sum;
        cout << "ISBN: " + data1.bookNo + " " << totalCnt << " " << sum << endl;
        if(totalCnt != 0){
            cout << " " << sum / totalCnt << endl;
        }else{
            cout << "no sales" << endl;
        }
    }else{
        cout << "data must refer to the same ISBN" << endl;
    }
    return 0;
}