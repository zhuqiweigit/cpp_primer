#include <iostream>
#include "Sales_data.h"
using std::cout; using std::cin; using std::endl;
int main(){
    Sales_data all(std::cin);
    if(!all.isbn().empty()){
        istream &is = std::cin;
        //当cin不到文件尾部时，一直执行循环
        while(is){
            Sales_data temp(is);
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
