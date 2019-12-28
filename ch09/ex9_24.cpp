#include <iostream>
#include <deque>
#include <list>
#include <vector>
using namespace std;
int main() {
    vector<int> vec{1,2,3,4,5,6};
    int a = vec[0];
    int b = vec.at(0);
    int c = vec.front();
    int &d = vec.front();
    int e = *vec.begin();

    return 0;
}
