#include <iostream>
using std::cin;
using std::string;
using std::cout;
int main(){
    int cnt = 0, maxCnt = 0;
    string maxStr;
    for(string pre, str; cin >> str; pre = str){
        if(pre == str) ++cnt;
        else cnt = 0;
        if(cnt > maxCnt){ maxCnt = cnt; maxStr = str;}
    }
    cout << maxCnt << " " << maxCnt;
    return 0;
}