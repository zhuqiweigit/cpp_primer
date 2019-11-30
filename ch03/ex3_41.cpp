#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;
using std::begin;
using std::end;
int main(){
    int a[] = {1,2,3,4,5};
    vector<int> vec(begin(a), end(a));
    for(auto i : vec){
        cout << i << endl;
    }
    return 0;
}