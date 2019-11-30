#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
int main() {
    vector<int> vec{1,2,3,4,5,6,7,8,9};
    for(auto &item : vec){
        item = item % 2 == 1 ? item * 2 : item;
    }
    for(auto iter = vec.begin(); iter != vec.end(); iter++){
        cout << *iter << endl;
    }
    return 0;
}