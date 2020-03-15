#include <vector>
#include <iostream>
using namespace std;
class X{
public:
    X(){cout << "X()" << endl;}
    X(const X& origin){ cout << "X(const X &)" << endl;}
    X& operator= (const X&){cout << "X& operator=" << endl;}
    ~X(){ cout << "~X()" << endl;}
};
void f1(){
    X *a1 = new X();
    delete a1;
}
void f2(){
    X a;
    vector<X> vec;
    vec.push_back(a);
}
void f3(X* a){
    X* b = a;
    delete a;
}
int main(){
  f1();
    cout << "f1" << endl;
  f2();
    cout << "f2" << endl;
  f3(new X());
    cout << "f3" << endl;
}