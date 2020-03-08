#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <utility>
using namespace std;
int main(){
    vector<pair<string, int>> vec;
    string ss;
    int n;
    while(cin >> ss && cin >> n){
        vec.push_back(make_pair(ss, n));
        pair<string, int> p = {ss, n};
        pair<string, int> p2(ss, n);
    }
    for(auto item : vec){
        cout << item.first << " " << item.second << endl;
    }
    return 0;
}