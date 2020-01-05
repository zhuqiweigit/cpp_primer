#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
using namespace std::placeholders;

bool findInt(const int& strLen, const int& num){
    return num > strLen;
}
int biggies(const string& s, vector<int>& vec){
    auto f = bind(findInt, s.size(), _1);
    auto pos = find_if(vec.begin(), vec.end(), f);
    if(pos != vec.end())
        return *pos;
    else return -1;
}


int main(){
    vector<int> vec{1,2,3,4,5,6,7,8,9,0};
    string ss = "abcd";
    cout << biggies(ss, vec) << endl;
    return 0;
}