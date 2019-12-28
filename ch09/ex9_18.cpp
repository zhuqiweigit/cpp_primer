#include <iostream>
#include <deque>
#include <list>

using namespace std;
int main() {
    string ss;
    deque<string> dq;
    list<string> lst;
    while(cin >> ss){
       // dq.push_back(ss);
        lst.push_back(ss);
    }
    for(const auto& s: lst){
        cout << s << endl;
    }
    return 0;
}
