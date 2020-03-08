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
        if(exclude.find(*in) == exclude.end()){
            ++dic[*in];
            auto ret = dic.insert({*in, 1});  //如果元素存在，则什么也不做
            if(ret.second == false)
                ++(ret.first->second);
        }
        in++;
    }
    for(const auto &item : dic){
        cout << item.first << " : " << item.second << endl;
    }
    return 0;
}