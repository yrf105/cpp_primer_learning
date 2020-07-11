#include <iostream>
#include <vector>

using namespace std;

vector<int>::iterator find_num (vector<int>::iterator ite1, vector<int>::iterator ite2, int target) {
    while (ite1 != ite2) {
        if (*ite1 == target) return ite1;
        ++ite1;
    }
    return ite1;
}

int main () {
     
    return 0;
}