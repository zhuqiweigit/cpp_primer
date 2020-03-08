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
    ifstream ifs("../a.txt");
    vector<string> vec;
    istream_iterator<string> in(ifs), eof;
    while(in != eof){
        vec.push_back(*in++);
    }
    for(auto item : vec){
        cout << item << endl;
    }
    return 0;
}