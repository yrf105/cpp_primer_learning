#include <iostream>
#include <vector>

using std::vector;

int main () {
    vector<int> ivec;
    int f;
    //   what():  vector::_M_range_check: __n (which is 0) >= this->size() (which is 0)
    // f = ivec.at(0);
    // f = *ivec.begin();
    // f = *(--ivec.end());
    // f = ivec.front();
    // f = ivec.back();

    return 0;
}