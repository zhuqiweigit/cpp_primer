#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <fstream>
using std::istream; using std::string; using std::vector; using std::istringstream;
void readData(const string& file, std::ifstream& is){
    is.open(file);
    vector<string> lines;
    string line, word;
    while(getline(is, line)){
        lines.push_back(line);
    }
    for(auto ll : lines){
        istringstream iss(ll);
        while(iss >> word){
            std::cout << word << std::endl;
        }
    }
    return;
}


int main(){
    //readData(std::cin);
    string file = "../a.txt";
    std::ifstream is;
    readData(file, is);
    return 0;
}