#include <iostream>
#include <vector>
#include <initializer_list>
using std::cin; using std::cout; using std::endl;using std::string;
void printVec(std::vector<int>::iterator begin, std::vector<int>::iterator end){
    if(begin != end){
        cout << *begin << endl;
        printVec(++begin, end);
    }else{
        return;
    }
}

int main(int argc, char **argv){
    std::vector<int> vec = {0,1,2,3,4,5,6};
    printVec(vec.begin(), vec.end());
    return 0;
}