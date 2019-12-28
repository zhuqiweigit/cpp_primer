#ifndef DATE_H
#define DATE_H
#include <string>
#include <map>
#include <iostream>
using namespace std;
class Date{
private:
    unsigned year, month, day;
    static map<string, unsigned> dic;
public:
    Date(unsigned year, unsigned month, unsigned day):year(year), month(month), day(day){}
    Date(const string&);
    void print();
};

map<string, unsigned> Date::dic = {{"Jan",1},
                                   {"Feb", 2},
                                   {"Mar", 3},
                                   {"Apr", 4},
                                   {"May", 5},
                                   {"June", 6},
                                   {"July", 7},
                                   {"Aug", 8},
                                   {"Sep", 9},
                                   {"Oct", 10},
                                   {"Nov", 11},
                                   {"Dec", 12} };
Date::Date(const string & dateStr) {
    decltype(dateStr.find("")) pos;
    for(auto iter = dic.begin(); iter != dic.end(); iter++){
        if((pos = dateStr.find(iter->first)) != string::npos) {
            month = iter->second;
            break;
        }
    }
    if(pos == string::npos){
        pos = dateStr.find_first_of("0123456789");
        month = stoi(dateStr.substr(pos));
    }
    pos = dateStr.substr(pos).find_first_of("0123456789");
    day = stoi(dateStr.substr(pos));
    pos = dateStr.find_last_not_of("0123456789");
    year = stoi(dateStr.substr(pos + 1));
}
void Date::print() {
    cout << "year:" << year << " month:" << month << " day:" << day << endl;
}
#endif