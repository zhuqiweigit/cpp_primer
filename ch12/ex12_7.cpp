#include <memory>
#include <iostream>
#include <vector>
using namespace std;
shared_ptr<vector<int>> genVector(){
    return make_shared<vector<int>>();
}
void fillVector(shared_ptr<vector<int>> vec){
    int num;
    while(cin >> num){
        vec->push_back(num);
    }
}
void displayVector(shared_ptr<vector<int>> vec){
    for(auto i : *vec){
        cout << i << endl;
    }
}

int main(){
    auto vec = genVector();
    fillVector(vec);
    displayVector(vec);
    return 0;
}