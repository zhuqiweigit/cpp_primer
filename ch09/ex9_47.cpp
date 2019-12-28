#include <iostream>
#include <deque>
#include <list>
#include <vector>
#include <string>
using namespace std;
int main() {
    string ss("ab2c3d7R4E6");
    string num = "0123456789";
    int pos = 0;
    while((pos = ss.find_first_of(num, pos)) != string::npos){
        cout << "find num: " << ss[pos++] << endl;
    }
    pos = 0;
    while((pos = ss.find_first_not_of(num, pos)) != string::npos){
        cout << "find char: " << ss[pos++] << endl;
    }
    return 0;
}
