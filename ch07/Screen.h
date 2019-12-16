#ifndef SCREEN_H
#define SCREEN_H
#include <string>
#include <iostream>
#include <vector>
class Screen;
class WindowMgr{
public:
    using screenIndex = std::vector<Screen>::size_type;
    void clear(std::vector<Screen>::size_type);
private:
    std::vector<Screen> screens;
};

class Screen{
    friend void WindowMgr::clear(std::vector<Screen>::size_type);
public:
    using pos = std::string::size_type;
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
private:
    void doDisplay(std::ostream &os) const;
public:
    Screen() = default;
    Screen(pos height, pos width): height(height), width(width), contents(height*width, ' '){}
    Screen(pos height, pos width, char c): height(height), width(width), contents(height * width, c) { }
    char get() const {
        return contents[cursor];
    }
    char get(pos , pos ) const;
    Screen& move(pos, pos);
    Screen& set(char c);
    Screen& set(pos x, pos y, char c);
    const Screen& display(std::ostream &os) const{ doDisplay(os); return *this; };
    Screen& display(std::ostream &os){ doDisplay(os); return *this; };
    pos size();
};
inline
Screen& Screen::set(char c){
    contents[cursor] = c;
    return *this;
}
inline
Screen& Screen::set(pos x, pos y, char c){
    contents[x * width + y] = c;
    return *this;
}
inline
char Screen::get(pos x, pos y) const{
    return contents[x * width + y];
}
inline
Screen& Screen::move(pos x, pos y){
    cursor = x * width + y;
    return *this;
}
void Screen::doDisplay(std::ostream &os) const{
    os << contents;
}
Screen::pos Screen::size(){
    return width * height;
}
void WindowMgr::clear(screenIndex idx) {
    Screen &sc = screens[idx];
    sc.contents = std::string(sc.width * sc.height, ' ');
    screens[idx].contents = "abc";
}
#endif