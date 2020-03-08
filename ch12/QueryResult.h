#ifndef QUERY_RESULT_H
#define QUERY_RESULT_H
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;
class QueryResult;
class TextQuery{
public:
    using lineNo = vector<string>::size_type ;
    TextQuery(ifstream &);
    QueryResult query(const string&) const;
private:
    shared_ptr<vector<string>> file;
    map<string, shared_ptr<set<int>>> mp;
};

class QueryResult{
    friend std::ostream& print(ostream&, QueryResult&);
public:
    QueryResult(string wd, shared_ptr<vector<string>> file, shared_ptr<set<int>> line):sought(wd), file(file), line(line){}
private:
    string sought;
    shared_ptr<vector<string>> file;
    shared_ptr<set<int>> line;
};


TextQuery::TextQuery(ifstream & ifs) :file(new vector<string>()){
    string ll;
    int lineNum = 0;
    while(getline(ifs, ll)){
        ++lineNum;
        file->push_back(ll);
        istringstream ss(ll);
        string ww;
        while(ss >> ww){
            auto& dic = mp[ww];
            if(!dic){
                dic.reset(new set<int>);
            }
            dic->insert(lineNum);
        }
    }
}

QueryResult TextQuery::query(const string& ss)const{
    static shared_ptr<set<int>> nodata(new set<int>);
    auto loc = mp.find(ss);
    if(loc == mp.end()){
        return QueryResult(ss, file, nodata);
    }else{
        return QueryResult(ss, file, loc->second);
    }
}

ostream& print(ostream& os, QueryResult& qr){
    os << qr.sought << " occurs " << qr.line->size() << " time(s)" << endl;
    for(auto num : *(qr.line)){
        os << num << " " << (*(qr.file))[num - 1] << endl;
    }
    return os;
}

#endif