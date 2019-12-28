#include <iostream>
#include <deque>
#include <list>
#include <vector>
using namespace std;
int main() {
    int a[] = {0,1,1,2,3,5,8,13,21,55,89};
    vector<int> vec;
    list<int> lst(begin(a), end(a));
    vec.assign(begin(a), end(a));
    auto iter = vec.begin();
    while(iter != vec.end()){
        if(*iter % 2 == 0) iter = vec.erase(iter);
        else iter++;
    }
    auto iter2 = lst.begin();
    while(iter2 != lst.end()){
        if(*iter % 2 == 1) iter2 = lst.erase(iter2);
        else iter++;
    }
    for(const auto& it : vec){
        cout << it << endl;
    }
    return 0;
}
