#ifndef EX_7_27_HPP
#define EX_7_27_HPP

#include <string>
#include <vector>

using std::string;
using std::vector;

class Window_mgr {
public :
    using ScreenIndex = vector<Screen>::size_type;  
    void clear (ScreenIndex);

private :
    vector<Screen> screens {Screen (24, 80, ' ')};
};

class Screen {
public :
    typedef string::size_type pos;
    Screen () = default;
    Screen (pos ht, pos wd, char c) : height (ht), width (wd), contents (ht * wd, c) { };
    char get () const { return contents[cursor]; }
    char get (pos ht, pos wd) const;
    Screen &move (pos r, pos c);
    void some_member () const;
    friend void Window_mgr::clear (ScreenIndex);

private :
    pos cursor = 0;
    pos height = 0, width = 0;
    string contents;
    mutable size_t access_ctr;

};

void Window_mgr::clear (ScreenIndex i) {
    Screen &s = screens[i];
    s.contents = string (s.height * s.width, ' ');
}

inline char Screen::get (pos r, pos c) const {
    pos row = r * width;
    return contents[row + c];
}

inline Screen &Screen::move (pos r, pos c) {
    pos row = r * width;
    cursor = row + c;
    return *this;
}

void Screen::some_member () const {
    ++ access_ctr;
}

#endif