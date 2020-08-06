#include <iostream>

// x_1_7.cpp:4:12: error: stray ‘\345’ in program
//     4 | *测试/**/���套注释
//       |            ^
// ex_1_7.cpp:4:13: error: stray ‘\265’ in program
//     4 | *测试/**/���套注释
//       |             ^
// ex_1_7.cpp:4:14: error: stray ‘\214’ in program
//     4 | *测试/**/��套注释
//       |              ^
// ex_1_7.cpp:4:15: error: stray ‘\345’ in program
//     4 | *测试/**/嵌���注释
//       |               ^
// ex_1_7.cpp:4:16: error: stray ‘\245’ in program
//     4 | *测试/**/嵌���注释
//       |                ^
// ex_1_7.cpp:4:17: error: stray ‘\227’ in program
//     4 | *测试/**/嵌��注释
//       |                 ^
// ex_1_7.cpp:4:18: error: stray ‘\346’ in program
//     4 | *测试/**/嵌套���释
//       |                  ^
// ex_1_7.cpp:4:19: error: stray ‘\263’ in program
//     4 | *测试/**/嵌套���释
//       |                   ^
// ex_1_7.cpp:4:20: error: stray ‘\250’ in program
//     4 | *测试/**/嵌套��释
//       |                    ^
// ex_1_7.cpp:4:21: error: stray ‘\351’ in program
//     4 | *测试/**/嵌套注���
//       |                     ^
// ex_1_7.cpp:4:22: error: stray ‘\207’ in program
//     4 | *测试/**/嵌套注���
//       |                      ^
// ex_1_7.cpp:4:23: error: stray ‘\212’ in program
//     4 | *测试/**/嵌套注��
//       |                       ^
// ex_1_7.cpp:6:2: error: expected unqualified-id before ‘/’ token
//     6 | */
//       |  ^

// /*
// *测试/**/嵌套注释
// *
// */

int main(){
    std::cout << "Hello, World!" << std::endl;
    return 0;
}