#include <iostream>
#include "Sales_data.h"
using std::cout; using std::cin; using std::endl;
int main(){
    Sales_data all, temp;
    if(read(cin, all)){
        while(read(cin, temp)){
            if(temp.isbn() == all.isbn()){
                all.conbine(temp);
            }else{
                print(cout, all);
                all = temp;
            }
        }
        print(cout, all);
    }
    return 0;
}
