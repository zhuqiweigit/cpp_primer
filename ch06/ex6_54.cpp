#include <iostream>
#include <vector>
#include <initializer_list>
using std::cin; using std::cout; using std::endl;using std::string;
int f1(int, int);
using fc = int (int, int);
typedef int fc2(int, int);

inline int add(int a, int b){return a + b;}
inline int mul(int a, int b){return a * b;}
inline int sub(int a, int b){return a - b;}
inline int div_(int a, int b){return b == 0 ? 0 : a / b;}


int main(int argc, char **argv){
    //必须加*,才是函数指针
    std::vector<fc*> vec;
    std::vector<int(*)(int, int)> vec2;
    std::vector<fc2*> vec3;

    // 函数名可以作为值使用，它会自动转换成函数指针
    fc *tempf = add;
    fc2 *tempf2 = &mul;

    vec.push_back(add);
    vec.push_back(&mul);
    vec.push_back(sub);
    vec.push_back(div_);

    int a = 10, b = 2;
    for(auto &it : vec){
        cout << it(a, b) << endl;
    }
    return 0;
}