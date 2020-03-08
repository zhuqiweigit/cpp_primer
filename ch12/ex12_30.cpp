#include <memory>
#include <iostream>
#include <vector>
#include <cstdio>
#include <fstream>
#include "QueryResult.h"
using namespace std;

int main(){
    ifstream ifs("../text.txt");
    TextQuery txq(ifs);
    string wd;
    while(true){
        if(!(cin >> wd) || wd == "q") break;
        QueryResult re = txq.query(wd);
        print(cout, re);
    }
}