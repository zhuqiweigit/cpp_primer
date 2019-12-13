#include <iostream>
#include "Sales_data.h"
using std::cout; using std::cin; using std::endl;
int main(){
    Sales_data all, temp;
    if(cin >> all.bookNo >> all.units_sold >> all.sum){
        while(cin >> temp.bookNo >> temp.units_sold >> temp.sum){
            if(temp.isbn() == all.isbn()){
                all.conbine(temp);
            }else{
                cout << all.isbn() << " " << all.units_sold << " " << all.sum << endl;
                all = temp;
            }
        }
        cout << all.isbn() << " " << all.units_sold << " " << all.sum << endl;
    }
    return 0;
}
