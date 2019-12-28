#include <iostream>
#include <deque>
#include <list>
#include <vector>
using namespace std;
int main() {
    vector<int> vec;
    int temp;
    auto iter = vec.begin();
    while(cin >> temp){
       iter = vec.insert(iter, temp);
    }
    for(const auto& item: vec){
        cout << item << endl;
    }

    return 0;
}
