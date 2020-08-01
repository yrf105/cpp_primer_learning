#include <string>
#include <regex>
#include <iostream>

using namespace std;

int main() {
    // 查找不在字符 c 之后的字符串 ei
    string pattern("[^c]ei");
    // 我们需要包含 pattern 的整个单词
    pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*";
    // 构造一个用于查找模式的 regex
    regex r(pattern);
    // 定义一个对象保存搜索结果
    smatch results;

    // 定义一个匹配与不匹配的文本
    string test_str = "receipt freind theif receive";
    // 用 r 在 test_str 中查找与 pattern 匹配的子串
    if (regex_search(test_str, results, r)) 
        cout << results.str() << endl;

    return 0;
}
