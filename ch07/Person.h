#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>
using std::istream; using std::ostream;
struct Person{
private:
    std::string name;
    std::string address;
public:
    Person(const string &name, const string &address): name(name), address(address){}
    Person(std::istream &is){
        is >> name >> address;
    }
    Person():name("XiaoMing"), address("zju"){}

    friend istream &read(istream is, Person& person);
    friend ostream &print(ostream os, const Person& person);
};
istream &read(istream is, Person& person){
    is >> person.name >> person.address;
    return is;
}
ostream &print(ostream os, const Person& person){
    os << person.name << " " << person.address;
    return os;
}
#endif