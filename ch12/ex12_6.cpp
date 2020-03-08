#include <memory>
#include <iostream>
#include <vector>
using namespace std;
vector<int>* genVector(){
    return new vector<int>();
}
void fillVector(vector<int> *vec){
    int num;
    while(cin >> num){
        vec->push_back(num);
    }
}
void displayVector(vector<int>* vec){
    for(auto i : *vec){
        cout << i << endl;
    }
}

int main(){
    auto vec = genVector();
    fillVector(vec);
    displayVector(vec);
    delete vec;
    return 0;
}