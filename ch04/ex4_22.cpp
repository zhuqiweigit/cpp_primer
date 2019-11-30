#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
int main() {
    int grade;
    while(cin >> grade){
        cout << (grade > 90 ? "high pass" : grade > 75 ? "pass" : grade > 60 ? "low pass" : "fail") << endl;
    }
    return 0;
}