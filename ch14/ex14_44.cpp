#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <map>
int add(int a, int b){return a + b;}
auto sub = [](int a, int b){return a - b;};
class mul{
public:
    int operator()(int a, int b){
        return a * b;
    }
};

std::map<std::string, std::function<int(int,int)>> op{
    {"+", add},
    {"-", sub},
    {"*", mul()}
};
int main(){
    int a, b;
    std::string s;
    std::cin >> a >> s >> b;
    std::cout << op[s](a, b) << std::endl;
    return 0;
}