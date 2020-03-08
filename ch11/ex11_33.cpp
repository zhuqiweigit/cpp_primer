#include<iostream>
#include<string>
#include<map>
#include<fstream>
#include <sstream>
using namespace std;

map<string, string> buildMap(ifstream &mapFile){
    map<string, string> transMap;
    string key, val;
    while(mapFile >> key && getline(mapFile, val)){
        if(val.size() > 1){
            transMap[key] = val.substr(1);
        }
    }
    return transMap;
}

const string& transform(const string& s, const map<string, string> mp){
    auto it = mp.find(s);
    if(it == mp.cend()){
        return s;
    }else{
        return it->second;
    }
}

void wordTransform(ifstream& mapFile, ifstream& file){
    auto transMap = buildMap(mapFile);
    string line, word;
    while(getline(file,line)){
        istringstream ss(line);
        while(ss >> word){
            word = transform(word, transMap);
            cout << word << " ";
        }
        cout << endl;
    }
}

int main(){
    ifstream f1("../map.txt"), f2("../text.txt");
    wordTransform(f1, f2);
    return 0;
}