// #include <iostream>
// #include <vector>

// void double_and_insert(std::vector<int>& v, int some_val)
// {
//     auto mid = [&]{ return v.begin() + v.size() / 2; };
//     for (auto curr = v.begin(); curr != mid(); ++curr)
//         if (*curr == some_val)
//             ++(curr = v.insert(curr, 2 * some_val));
// }

// int main()
// {
//     std::vector<int> v{1, 2, 1, 2, 2, 1, 1, 1, 1, 1};
//     double_and_insert(v, 2);

//     for (auto i : v) 
//         std::cout << i << " ";
//     std::cout << std::endl;
// }

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> iv = {0,1,2,3,4,5,6,7,8,9};
    auto iter = iv.end(), mid = iv.begin() + iv.size()/2;
    iv.insert(iter, -1);
    std::cout << "capacity = " << iv.capacity() << std::endl;
    std::cout << "iter's pos: " << iter - iv.begin() << std::endl;  // -12
    std::cout << "mid's pos: " << mid - iv.begin() << std::endl;  // -7

    return 0;
}