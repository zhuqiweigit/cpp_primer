#include "SalesData.h"
#include <string>
#include <iostream>
using namespace std;

int main(){
    SalesData a("no.001");
    std::string bookNo = static_cast<string>(a);
    double sum = static_cast<double>(a);
    cout << bookNo << " " << sum << endl;
    return 0;
}