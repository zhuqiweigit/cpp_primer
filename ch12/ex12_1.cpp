#include "ex12_1.h"
#include <iostream>
int main(){
    StrBlob a{"1", "2", "3"}, b{"2", "3", "4"};
    std::cout << a.front() << " " << a.back() << std::endl;
    b.pop_back();
    std::cout << b.back() << std::endl;
    return 0;
}