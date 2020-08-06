#include <iostream>

auto sum_range(int low, int high){
    int ret = 0;
    while (low <= high) ret += low++;
    return ret;
}

int main(){
    std::cout << sum_range(50, 100) << std::endl;
    return 0;
}