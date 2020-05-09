#include <iostream>

int main(){
    int i = 50, sum = 0;
    while (i < 101){
        sum += i++;
    }
    std::cout << sum << std::endl;
    return 0;
}