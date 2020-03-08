#include <string>

using namespace std;

class HasPtr{
public:
    HasPtr(const std::string& s = std::string()):ps(new std::string(s)), i(0) {}
    HasPtr(const HasPtr& origin): ps(new string(*origin.ps)), i(origin.i){}
    ~HasPtr(){
        delete ps;
    }
private:
    std::string *ps;
    int i;
};