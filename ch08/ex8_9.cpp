#include <iostream>
#include <string>
#include <sstream>
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
    //readData(std::cin);
    std::string ss = "this is a string";
    std::istringstream is(ss);
    readData(is);
    return 0;
}