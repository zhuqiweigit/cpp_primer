#include <numeric>
#include <vector>
#include <iostream>
using namespace std;
int main(){
    vector<int> vec{1,2,3,4,5,6,7,8,9};
    int sum = accumulate(vec.begin(), vec.end(), 0);
    cout << sum << endl;
    return 0;
}