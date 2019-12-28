#include <iostream>
#include <deque>
#include <list>
#include <vector>
#include <forward_list>
using namespace std;


int main() {
    vector<int> vec;
    for(int i = 0; i < 10; i++){
        vector<int>::size_type cap = vec.capacity(), size = vec.size();
        cout << "cap: " << cap << endl;
        for(int j = 0; j <= cap - size; j++){
            vec.push_back(0);
        }
    }

    return 0;
}
