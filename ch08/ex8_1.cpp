#include <iostream>
#include <string>
using std::istream;
istream& readData(istream& is){
    auto streamStat = is.rdstate();
    std::string str;
    while(is >> str){
        std::cout << str << std::endl;
    }
    is.clear(streamStat);
    return is;
}


int main(){
    readData(std::cin);
    return 0;
}