#include <iostream>
#include <deque>
#include <list>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

void findWords(const string& filePath, vector<string>& ans){
    string up = "bdhiklt";
    string down = "fgjpqy";
    ifstream ifs;
    ifs.open(filePath);
    string ss;
    while(ifs >> ss){
        if(ss.find_first_of(up, 0) == string::npos && ss.find_first_of(down, 0) == string::npos){
            ans.push_back(ss);
        }
    }
    ifs.close();
}
int main() {
    string file = "../words.txt";
    vector<string> ans;
    findWords(file, ans);
    for(const auto& s :ans){
        cout << s << endl;
    }
    return 0;
}
