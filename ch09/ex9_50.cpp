#include <iostream>
#include <deque>
#include <list>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

int main() {
    vector<string> integers = {"100", "-10", "kdajs = -20"};
    vector<string> floats = {"10", "20", "30"};
    int sum1 = 0;
    double sum2 = 0;
    for(auto const& num : integers){
        decltype(num.find_first_of("0")) pos;
        if((pos = num.find_first_of("+-0123456789"))!= string::npos){
            sum1 += stoi(num.substr(pos));
        }
    }
    for(auto const& num: floats){
        decltype(num.find_first_of("0")) pos;
        if((pos = num.find_first_of("+-.0123456789")) != string::npos){
            sum2 += stod(num.substr(pos));
        }
    }
    cout << sum1 << endl;
    cout << sum2 << endl;
    return 0;
}
