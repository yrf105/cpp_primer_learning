#include<iostream>
#include<iterator>

using std::cout;
using std::endl;
using std::begin;
using std::end;


int main() {
    int a[] = {1,4,2,4,2,1};
    int *pbeg = begin(a);
    int *pend = end(a);

    while (pbeg != pend) *pbeg++ = 0;

    pbeg = begin(a);
    while (pbeg != pend) cout << *pbeg++ << endl;

    return 0;
}