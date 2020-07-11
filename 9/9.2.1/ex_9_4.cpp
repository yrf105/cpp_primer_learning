#include <iostream>
#include <vector>

using namespace std;

bool find_num (vector<int>::iterator ite1, vector<int>::iterator ite2, int target) {
    while (ite1 != ite2) {
        if (*ite1 == target) return true;
        ++ite1;
    }
    return false;
}

int main () {
    
    return 0;
}