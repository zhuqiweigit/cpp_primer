#include <numeric>
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <list>
using namespace std;

int main(){
    vector<int> vec = {1,1,2,2,2,2,3,4,5,6,7,8};
    list<int> lst;
    unique_copy(vec.begin(), vec.end(), back_inserter(lst));
    for(auto i : lst){
        cout << i << endl;
    }
    return 0;
}