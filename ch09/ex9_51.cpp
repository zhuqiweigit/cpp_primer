#include <iostream>
#include <deque>
#include <list>
#include "Date.h"
using namespace std;

int main() {
    Date dt1("January 1, 1990"), dt2("1/1/1990"), dt3("Jan 1 1990");
    dt1.print();
    dt2.print();
    dt3.print();
    return 0;
}
