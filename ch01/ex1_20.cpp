#include "Sales_item.h"
#include <iostream>
using namespace std;
int main(){
    Sales_item item, itemSum,temp;
    bool unUsed = true;
    while(cin >> item){
        if(unUsed) {
            unUsed = false;
            itemSum = item;
        }else{
            itemSum += item;
        }

    }
    cout << itemSum << endl;
    return 0;
}