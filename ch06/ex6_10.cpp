#include <iostream>
#include <vector>
#include "chapter6.h"
using std::cin; using std::cout; using std::endl;
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
using namespace std;
vector<int> vec;
void init(){
    vec = vector<int>(100, -1);
}
int main(){
    int a, b;
    init();
    for(auto vv : vec){
        cout << vv<< endl;
    }

/*
    while(cin >> a >> b){
        swap(&a, &b);
        cout << a << " " << b << endl;
    }*/
    return 0;
}