#include <iostream>
#include <vector>
using std::cin; using std::string; using std::cout; using std::vector;
int main(){
    vector<int> vec{1,2,3,4,5}, vec2{1,2,3,4,5,0,0,0,0};
    auto it1 = vec.begin(), it2 = vec2.begin();
    for(; it1 != vec.end() && it2 != vec2.end() && *it1 == *it2; ++it1, ++it2);
    if(it1 == vec.end() || it2 == vec2.end()){
        cout << "true";
    }else{
        cout << "flase";
    }
    return 0;
}