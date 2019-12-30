#include <numeric>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
inline
bool isLarger(const string& s){
    return s.length() >= 5;
}

void findWords(vector<string> &words){
    auto pos = partition(words.begin(), words.end(), isLarger);
    words.erase(pos, words.end());
}


int main(){
    vector<string> vec{"a", "b", "ccccccc", "c", "a", "ooo", "ada", "000", "ajsdkljsa", "asd121", "000000"};
    findWords(vec);
    for(auto item : vec){
        cout << item << endl;
    }
    return 0;
}