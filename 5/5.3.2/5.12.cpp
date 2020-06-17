#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    unsigned aCnt = 0, oCnt = 0, eCnt = 0, iCnt = 0, uCnt = 0, tableCnt = 0, enterCnt = 0, fiCnt = 0;
    char ch, preCh = '\0';

    // std::noskipws - 不跳过空白字符
    while (cin >> std::noskipws >> ch) {
        switch (ch) {
            case 'a':
            case 'A':
                ++aCnt;
                break;
            case 'o':
            case 'O':
                ++oCnt;
                break;
            case 'e':
            case 'E':
                ++eCnt;
                break;
            case 'i':
                if (preCh == 'f') ++fiCnt;
            case 'I':
                ++iCnt;
                break;
            case 'u':
            case 'U':
                ++uCnt;
                break;
            case '\t':
                ++tableCnt;
                break;
            case '\n':
                ++enterCnt;
                break;
            default:
                break; // 空语句
        }
        preCh = ch;
    }
    
    cout << "Number of vowel a:\t" << aCnt << endl 
         << "Number of vowel o:\t" << oCnt << endl
         << "Number of vowel e:\t" << eCnt << endl
         << "Number of vowel i:\t" << iCnt << endl
         << "Number of vowel u:\t" << uCnt << endl
         << "Number of vowel fi:\t" << fiCnt << endl
         << "Number of vowel table:\t" << tableCnt << endl
         << "Number of vowel center:\t" << enterCnt << endl;

    return 0;
}