#include <iostream>
#include <vector>
#include <initializer_list>
using std::cin; using std::cout; using std::endl;using std::string;
int addAllList(std::initializer_list<int> lst){
    int sum = 0;
    for(auto it : lst){
        sum += it;
    }
    return sum;
}

int main(int argc, char **argv){
    int a = 10, b = 9, c = 8, d = 7;
    cout << addAllList({a, b, c, d}) << endl;
    return 0;
}