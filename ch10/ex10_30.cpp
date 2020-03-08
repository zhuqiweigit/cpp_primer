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
    vector<int> vec;
    istream_iterator<int> in(cin), eof;
    copy(in, eof, back_inserter(vec));
    sort(vec.begin(), vec.end());

    for(auto item : vec){
        cout << item << endl;
    }
    return 0;
}