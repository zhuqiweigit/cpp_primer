#include <numeric>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main(){
    int val = 0;
    auto sum = [](const int a, const int b)->int{
        return a + b;
    };
    auto sum2 = [val](const int a)->int{
        return val + a;
    };
    cout << sum(1, 2) << endl;
    return 0;
}