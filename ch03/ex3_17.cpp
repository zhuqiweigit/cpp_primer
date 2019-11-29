#include <iostream>
#include <vector>
using namespace std;
template <typename T>
inline void outVector(vector<T> a){
    decltype(a.size()) size = a.size();
    cout << "size: " << size << endl;
    for(auto item : a){
        cout << item << " ";
    }
    cout << "\n";
}

int main(){
    vector<string> words;
    string word;
    while(cin >> word){
        words.push_back(word);
    }
    for(auto &u : words){
        for(auto &c : u){
            c = toupper(c);
        }
    }
    for(auto u : words){
        cout << u << endl;
    }
    return 0;

}