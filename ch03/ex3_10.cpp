#include <iostream>
using namespace std;
int main(){
    string s, ans;
    cin >> s;
    // auto &c
    for(char c : s){
        if(!ispunct(c)){
            ans += c;
        }
    }
    cout << ans << endl;

    return 0;

}