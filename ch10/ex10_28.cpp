#include <numeric>
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <list>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5,6,7,8,9};
    list<int> lst1, lst2, lst3;
    copy(vec.begin(), vec.end(), inserter(lst1, lst1.end()));
    copy(vec.begin(), vec.end(), back_inserter(lst2));
    copy(vec.begin(), vec.end(), front_inserter(lst3));
    for(auto i : lst1){
        cout << i << " ";
    }
    cout << endl;
    for(auto i : lst2){
        cout << i << " ";
    }
    cout << endl;
    for(auto i : lst3){
        cout << i << " ";
    }
    return 0;
}