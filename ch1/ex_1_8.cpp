#include <iostream>

int main(){
    std::cout << "/*" << std::endl;
    std::cout << "*/";
    // std::cout << /* "*/" */ ;
    std::cout << /* "*/" /* "/*" */;
    return 0;
}