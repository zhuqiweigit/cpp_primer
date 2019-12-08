#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl;using std::string;

int main(int argc, char **argv){
   string ss, temp;
   for(int i = 1; i < argc; i++){
       ss += argv[i];
   }
   cout << ss << endl;
   for(int i = 0; i < argc; i++){
       cout << argv[i] << endl;
   }

    return 0;
}