#include <iostream>
#include <string>
class printString{
private:
    std::istream &is;
public:
    printString():is(std::cin){
    }
    std::string operator() (){
        std::string ss;
        std::getline(is, ss);
        return is ? ss : std::string();
    }
};

int main(){
    printString ps;
    std::cout << ps() << std::endl;
    return 0;
}