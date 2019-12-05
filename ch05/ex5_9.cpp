#include <iostream>
using std::cin;
using std::string;
using std::cout;
int main(){
    char c;
    int cnt = 0;
    while(cin >> c){
        c = tolower(c);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}