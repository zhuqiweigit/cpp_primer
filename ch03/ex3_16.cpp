#include <iostream>
#include <vector>
using namespace std;
template <typename T>
inline void outVector(vector<T> a){
    decltype(a.size()) size = a.size();
    cout << "size: " << size << endl;
    for(auto item : a){
        cout << item << " ";
    }
    cout << "\n";
}

int main(){
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    outVector(v1);
    outVector(v2);
    outVector(v3);
    outVector(v4);
    outVector(v5);
    outVector(v6);
    outVector(v7);


    return 0;

}