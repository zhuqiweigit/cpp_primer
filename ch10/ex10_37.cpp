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
   vector<int> vec = {0,1,2,3,4,5,6,7,8,9};
   list<int> lst;
   ostream_iterator<int> out(cout, " ");
   copy(vec.begin() + 3, vec.begin() + 8, front_inserter(lst));
   copy(lst.begin(), lst.end(), out);
   return 0;
}