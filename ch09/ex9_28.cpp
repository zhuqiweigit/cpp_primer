#include <iostream>
#include <deque>
#include <list>
#include <vector>
#include <forward_list>
using namespace std;

void process(forward_list<string> &fwlst, string s1, string s2){
    auto pre = fwlst.before_begin();
    auto curr = fwlst.begin();
    while(curr != fwlst.end()){
        if(*curr == s1){
            pre = curr;
            curr = fwlst.insert_after(curr, s2);
            break;
        }else{
            pre = curr++;
        }
    }
    if(curr == fwlst.end()){
        fwlst.insert_after(pre, s2);
    }
}

int main() {
    return 0;
}
