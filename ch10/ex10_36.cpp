#include <numeric>
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <list>
#include <fstream>
using namespace std;

int main(){
   vector<int> vec = {0,1,2,0,3,4,5,6,7};
   ostream_iterator<int> os(cout, " ");
   auto pos = find(vec.crbegin(), vec.crend(), 0);
   os = pos == vec.crend() ? -1 : pos.base() - vec.cbegin() - 1;
   return 0;
}