#ifndef STRBLOB_H
#define STRBLOB_H
#include<vector>
#include<string>
#include<memory>
#include<initializer_list>
using std::vector; using std::string;
class StrBlob{
public:
    typedef vector<string>::size_type size_type;
    StrBlob():data(std::make_shared<vector<string>>()){}
    StrBlob(std::initializer_list<string> lst):data(std::make_shared<vector<string>>(lst)){}
    size_type size() const{ return data->size();}
    bool empty() const{return data->empty();}
    void push_back(const string& s){
        data->push_back(s);
    }
    void pop_back(){
        check(0, "out of range");
        data->pop_back();
    }
    string& front(){
        check(0, "out of range");
        return data->front();
    }
    string& back(){
        check(0, "out of range");
        return data->back();
    }

private:
    std::shared_ptr<vector<string>> data;
    void check(size_type i, const string &msg) const{
        if(i >= data->size()){
            throw std::out_of_range(msg);
        }
    }
};

#endif