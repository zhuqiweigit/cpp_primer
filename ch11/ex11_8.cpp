#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;
int main(){
    vector<int> vec;
    istream_iterator<int> in(cin), eof;
    auto bk = back_inserter(vec);
    while(in != eof){
        if(find(vec.cbegin(), vec.cend(), *in) == vec.cend()){
            *bk = *in;
        }
        in++;
    }
    for(const auto item : vec){
        cout << item << endl;
    }
    return 0;
}