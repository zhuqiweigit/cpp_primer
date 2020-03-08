#include <iostream>
#include <map>
#include <set>
using namespace std;
int main(){
    set<string> exclude = {
            "the", "but", "and", "or"
    };
    map<string, int> dic;
    istream_iterator<string> in(cin), eof;
    while(in != eof){
        string ss = *in++, ss2;
        auto pos = ss.find_first_of(",.;'?");
        if(pos != string::npos) {
            ss.erase(ss.begin() + pos, ss.end());
        }
        ss2 = ss;
        transform(ss.begin(), ss.end(), ss.begin(), ::tolower);
        if(exclude.find(ss) == exclude.end()){
            if(ss == ss2)
                dic[ss]++;
            else{
                dic[ss]++;
                dic[ss2]++;
            }
        }
    }
    for(const auto &item : dic){
        cout << item.first << " : " << item.second << endl;
    }
    return 0;
}