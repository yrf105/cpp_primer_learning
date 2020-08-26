#include "HasPtr.hpp"

#include <vector>
#include <algorithm>

int main(){
    std::vector<HasPtr> hp_vec;
    hp_vec.emplace_back(HasPtr("yue"));
    hp_vec.emplace_back(HasPtr("rui"));
    hp_vec.emplace_back(HasPtr("feng"));
    std::sort(hp_vec.begin(), hp_vec.end());
    
    return 0;
}