#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
int main() {
    int a;
    double b;
    short c;
    float d;
    int arr[10];
    int* e;
    cout << sizeof a << " " << sizeof b << " " << sizeof c << " " << sizeof d << " " << sizeof e << " " << sizeof arr << endl;
    int x[10], *p = x;
    cout << sizeof(x) << " " << sizeof(*x)<< endl;
    cout << sizeof(p) << " " << sizeof(*p) << endl;
    return 0;
}