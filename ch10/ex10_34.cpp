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
   vector<int> vec = {0,1,2,3,4,5,6,7};
   ostream_iterator<int> out(cout, " ");
   copy(vec.rbegin(), vec.rend(), out);
   return 0;
}