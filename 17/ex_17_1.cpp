#include <tuple>
#include <iostream>

using std::cout;
using std::endl;
using std::tuple;
using std::tuple_size;
using std::get;

int main() {
    tuple<int, int, int> ituple{10, 20 , 30};
    // for (int i = 0; i < tuple_size<decltype(ituple)>::value; ++i) 
    cout << get<0>(ituple) << endl;
    cout << get<1>(ituple) << endl;
    cout << get<2>(ituple) << endl;
    return 0;
}