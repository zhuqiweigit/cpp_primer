#include <iostream>
#include <deque>
#include <list>
#include <vector>
#include <forward_list>
using namespace std;
int main() {
    int a[] = {0,1,1,2,3,5,8,13,21,55,89};
    forward_list<int> fwlst(begin(a), end(a));
    auto pre = fwlst.before_begin();
    auto curr = fwlst.begin();
    while(curr != fwlst.end()){
        if(*curr % 2 == 1){
            curr = fwlst.erase_after(pre);
        }else{
            pre = curr++;
        }
    }
    for(const auto& item: fwlst){
        cout << item << endl;
    }
    return 0;
}
