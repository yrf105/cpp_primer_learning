#include <iostream>
#include <vector>
#include <memory>

std::shared_ptr<std::vector<int>> foo1() {
    return std::make_shared<std::vector<int>>();
}

std::shared_ptr<std::vector<int>> foo2(std::shared_ptr<std::vector<int>> ivec) {
    for (int i; std::cin >> i; ivec->push_back(i));
    return  ivec;
}

void foo3(std::shared_ptr<std::vector<int>> ivec) {
    for (auto i : *ivec) std::cout << i << " ";
    std::cout << std::endl;
}

int main() {
    std::shared_ptr<std::vector<int>> ivec = foo1();
    ivec = foo2(ivec);
    foo3(ivec);
    return 0;
}