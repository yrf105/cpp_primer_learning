#include<iostream>

using std::cout;
using std::cin;
using std::endl;
int main() {
    unsigned aCnt = 0, oCnt = 0, eCnt = 0, iCnt = 0, uCnt = 0;
    char ch;

    while (cin >> ch) {
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
            case 'I':
                ++iCnt;
                break;
            case 'u':
            case 'U':
                ++uCnt;
                break;
            default:
                ; // 空语句
        }
    }
    
    cout << "Number of vowel a:\t" << aCnt << endl 
         << "Number of vowel o:\t" << oCnt << endl
         << "Number of vowel e:\t" << eCnt << endl
         << "Number of vowel i:\t" << iCnt << endl
         << "Number of vowel u:\t" << uCnt << endl;

    return 0;
}