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
    ofstream ofs1("../b.txt"), ofs2("../c.txt");
    istream_iterator<int> in(ifs), eof;
    ostream_iterator<int> out1(ofs1, " "), out2(ofs2, "\n");
    while(in != eof){
        if(*in % 2 == 1){
            out1 = *in++;
        }else{
            out2 = *in++;
        }
    }
    return 0;
}