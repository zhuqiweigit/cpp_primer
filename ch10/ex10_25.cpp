#include <numeric>
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
using namespace std::placeholders;
void elimDups(vector<string>& words){
    sort(words.begin(), words.end());
    auto pos = unique(words.begin(), words.end());
    words.erase(pos, words.end());
}

bool checkSize(const string& s, string::size_type sz){
    return s.size() > sz;
}
void biggies2(vector<string>& words, vector<string>::size_type sz){
    elimDups(words);
    auto f = bind(checkSize, _1, sz);
    auto wc = partition(words.begin(), words.end(), f);
    cout << wc - words.begin() << endl;
    for_each(words.begin(), wc, [](const string& a){
        cout << a << endl;
    });
}


int main(){

    return 0;
}