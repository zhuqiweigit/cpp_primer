#include <iostream>
#include <vector>
using std::cin; using std::string; using std::cout; using std::vector; using std::endl;
int main(){
   int a, b;
   while(cin >> a >> b) {
       try {
           if (b == 0) {
               throw std::runtime_error("divisor is 0");
           }
           cout << a / b << endl;
       }catch (std::runtime_error err){
           cout << err.what() << "\ntry again? press 'y' or 'n' to continue" << endl;
           char c;
           cin >> c;
           if(c == 'n')
               break;
       }

   }
    return 0;
}