#include <iostream>
#include <deque>
#include <list>
#include <vector>
#include <forward_list>
using namespace std;

void replaceStr(string &s, const string& oldVal, const string& newVal){
    auto iter = s.begin();
    while(iter != s.end()){
        if(s.substr(iter - s.begin(), oldVal.size()) == oldVal){
            iter = s.erase(iter, iter + oldVal.size());
            iter = s.insert(iter, newVal.begin(), newVal.end());
            iter += newVal.size();
        }else{
            iter++;
        }
    }
}

void nameProcess(string& name, const string& pre, const string& last){
    name.insert(name.begin(), pre.begin(), pre.end());
    name.append(last);
}
void nameProcess2(string& name, const string& pre, const string& last){
    name.insert(0, pre);
    name.insert(name.length(), last);
}

void replaceStr2(string &s, const string& oldVal, const string& newVal){
    int index = 0;
    while(index < s.size()){
        if(s.substr(index, oldVal.size()) == oldVal){
            s.replace(index, oldVal.size(), newVal);
            index += newVal.size();
        }else{
            ++index;
        }
    }
}

int main() {
    string s("To drive straight thru is thru a thru foolish, tho courageous act.");
    replaceStr2(s,"tho","though");
    replaceStr2(s, "thru", "through");
    cout << s << endl;
    string name = "Lilei";
    nameProcess(name, "Mr.", "Jr.");
    nameProcess2(name, "Mr.", "Jr.");
    cout << name << endl;
    return 0;
}
