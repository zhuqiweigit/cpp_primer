#include <iostream>
#include "chapter6.h"
using std::cin; using std::cout; using std::endl;
int func(){
    static int cnt = 0;
    return cnt++;
}
int main(){
    for(int i = 0; i < 10; i++){
        cout << func() << endl;
    }
    return 0;
}