#include <iostream>
using namespace std;
int main(){
    string s(5, 'a');
    // auto &c
    for(char &c : s){
        c = 'X';
    }
    cout << s << endl;

    return 0;

}