#include <iostream>
#include <vector>

std::vector<int>* foo1() {
    return (new std::vector<int>({1, 2, 3}));
}

std::vector<int>* foo2(std::vector<int>* ivec) {
    for (int i; std::cin >> i; ivec->push_back(i));
    return  ivec;
}

void foo3(std::vector<int>* ivec) {
    for (auto i : *ivec) std::cout << i << " ";
    std::cout << std::endl;
}

int main() {
    std::vector<int>* ivec = foo1();
    ivec = foo2(ivec);
    foo3(ivec);
    delete ivec;
    return 0;
}