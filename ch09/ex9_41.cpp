#include <iostream>
#include <deque>
#include <list>
#include <vector>
#include <forward_list>
using namespace std;


int main() {
    vector<char> vec = {'a', 'b', 'c', 'd', '\0'};
    string s1(&(vec[0]));
    string s2(&(vec[0]) + 2, 3 );    //从vec[2]开始，拷贝3个字符
    string s3(&(vec[0]), 2, 3);    //从vec[2]开始，拷贝3个字符

    string s4;
    s4.reserve(100);

    return 0;
}
