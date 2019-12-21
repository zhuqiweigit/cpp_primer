#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using std::istream; using std::vector; using std::string; using std::ifstream ;
vector<string> readData(const string& file, ifstream& ifs){
   ifs.open(file);
   std::string ss;
   vector<std::string> re;
   while(ifs >> ss){
       re.push_back(ss);
   }
   return re;
}
vector<string>readDataLine(const string& file, ifstream& ifs){
    ifs.open(file);
    std::string ss;
    vector<string> re;
    while(getline(ifs, ss)){
        re.push_back(ss);
    }
    return re;
}
int main(){
    string file = "../a.txt";
    ifstream ifs;
    vector<string> re = readData(file, ifs);
    for(auto s : re){
        std::cout << s << std::endl;
    }
    ifs.close();
    vector<string> re2 = readDataLine(file, ifs);
    for(auto s : re2){
        std::cout << s << std::endl;
    }
    return 0;
}