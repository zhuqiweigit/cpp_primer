#include <numeric>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6};
    fill_n(begin(arr), end(arr) - begin(arr), 0);
    for(const auto& i : arr){
        cout << i << endl;
    }
    return 0;
}