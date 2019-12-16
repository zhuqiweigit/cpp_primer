#include <iostream>
#include "Screen.h"
using std::cout; using std::cin; using std::endl;
int main(){
    Screen myScreen(5, 5, 'x');
    myScreen.move(4, 0).set('#').display(cout);
    cout << '\n';
    myScreen.display(cout);
    //WindowMgr
    WindowMgr windowMgr;
    return 0;
}
