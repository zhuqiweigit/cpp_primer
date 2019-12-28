#include <iostream>
#include <deque>
#include <list>
#include <vector>
using namespace std;
int main() {
    list<int> lst{1,2,3,4,5,6,7,8,9};
    deque<int> even, odd;
    for(const auto& item : lst){
        (item % 2 == 0 ? even : odd).push_back(item);
    }
    for(const auto& item: even){
        cout << item << " ";
    }
    return 0;
}
