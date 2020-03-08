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
   auto it = vec.end();
   do{
       --it;
       out++ = *it;
   }while(it != vec.begin());
   return 0;
}