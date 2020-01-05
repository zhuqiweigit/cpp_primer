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
bool findSize(const string& s, int sz){
    return s.size() >= sz;
}
void biggies(vector<string>& words, vector<string>::size_type sz){
    elimDups(words);
    stable_sort(words.begin(), words.end(), [](const string &a, const string &b)->bool{
        return a.size() < b.size();
    });

    auto f = bind(findSize, _1, sz);
    auto wc = find_if(words.begin(), words.end(), f);

    cout << words.end() - wc << endl;
    for_each(wc, words.end(), [](const string& a){
        cout << a << endl;
    });
}



int main(){
    vector<string> vec{"a", "b", "ccccccc", "c", "a", "ooo", "ada", "000", "ajsdkljsa", "asd121", "000000"};
    elimDups(vec);
    biggies(vec, 5);
    return 0;
}