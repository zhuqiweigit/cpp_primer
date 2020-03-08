#include <numeric>
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <list>
#include <fstream>
using namespace std;

int main(){
    vector<int> vec, vec2;
    istream_iterator<int> in(cin), eof;
    copy(in, eof, back_inserter(vec));
    sort(vec.begin(), vec.end());
    unique_copy(vec.begin(), vec.end(), back_inserter(vec2));
    for(auto item : vec2){
        cout << item << endl;
    }
    return 0;
}