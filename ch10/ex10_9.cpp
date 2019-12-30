#include <numeric>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void elimDups(vector<string> &words){
    sort(words.begin(), words.end());
    auto pos = unique(words.begin(), words.end());
    words.erase(pos);
}
inline
bool isShorter(const string& s1, const string& s2){
    return s1.length() < s2.length();
}


int main(){
    vector<string> vec{"a", "b", "c", "c", "a", "ooo", "ada", "000"};
    elimDups(vec);
    stable_sort(vec.begin(), vec.end(), isShorter);
    for(auto item : vec){
        cout << item << endl;
    }
    return 0;
}