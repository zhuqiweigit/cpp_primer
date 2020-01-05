#include <numeric>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int cnt = 10;
    auto f = [&]()->bool{
        return (--cnt) == 0;
    };
    while(!f());
    cout << "f end" << endl;
    return 0;
}