#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
class equalOp{
private:
    int a;
public:
    equalOp(int a):a(a){}
    bool operator()(int b){
        return a == b;
    }
};

int main(){
    std::vector<int> vec{1,2, 3, 4, 5, 1, 1, 4, 5};
    std::replace_if(vec.begin(), vec.end(), equalOp(1), -1);
    for(auto i : vec){
        std::cout << i << std::endl;
    }
    return 0;
}