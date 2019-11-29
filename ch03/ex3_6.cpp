#include <iostream>
using namespace std;
int main(){
    string s(5, 'a');
    // auto &c
    for(auto &c : s){
        c = 'X';
    }
    cout << s << endl;
    //decltype
    for(decltype(s.size()) i = 0; i < s.size(); i++){
        s[i] = 'x';
    }
    cout << s << endl;
    return 0;

}