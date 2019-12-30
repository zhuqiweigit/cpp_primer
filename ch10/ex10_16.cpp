#include <numeric>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void elimDups(vector<string>& words){
    sort(words.begin(), words.end());
    auto pos = unique(words.begin(), words.end());
    words.erase(pos, words.end());
}
void biggies(vector<string>& words, vector<string>::size_type sz){
    elimDups(words);
    stable_sort(words.begin(), words.end(), [](const string &a, const string &b)->bool{
        return a.size() < b.size();
    });
    auto wc = find_if(words.begin(), words.end(), [sz](const string& a)->bool{
        return a.size() >= sz;
    });
    cout << words.end() - wc << endl;
    for_each(wc, words.end(), [](const string& a){
        cout << a << endl;
    });
}


void biggies2(vector<string>& words, vector<string>::size_type sz){
    elimDups(words);
    auto wc = partition(words.begin(), words.end(), [sz](const string& a)->bool{
        return a.size() >= sz;
    });
    cout << wc - words.begin() << endl;
    for_each(words.begin(), wc, [](const string& a){
        cout << a << endl;
    });
}


int main(){
    return 0;
}