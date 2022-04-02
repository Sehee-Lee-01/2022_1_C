#include <iostream>
using namespace std;

// Literal Constant vs Symbolic Constant
#define CONST1 97
// 왜 에러가 나지
int main() {
    char c = 97; // 'a' == '\141' == '\161'
    char a[10] = "abcde";
    char aa[10] = {'a', '\141', '\x61', 0141, 0x61};
    int i = 97;
    const int CONST2 = 97;
    float f = 1234567890.12345678901234567890;
    double d = 1234567890.12345678901234567890;
    long double ld0 = 1234567890.12345678901234567890;
    long double ld = 1234567890.12345678901234567890L;

    cout << "sizeof(\'a\') is " << sizeof('a') << endl; 
    cout << "sizeof(\'\\141\') is " << sizeof('\141') << endl;
    cout << "sizeof(97) is " << sizeof(97) << endl; // default: int type
    cout << "sizeof(97L) is " << sizeof(97L) << endl;// long int
    cout << "sizeof(\"abcde\") is " << sizeof("abcde") << endl;
    cout << "sizeof(1234567890.12345678901234567890) is "
         << sizeof(1234567890.12345678901234567890) << endl;// default: double type
    cout << "sizeof(1234567890.12345678901234567890L) is "
         << sizeof(1234567890.12345678901234567890L) << endl;// long double

    cout << "sizeof(CONST1) is " << sizeof(CONST1) << endl;
    cout << "sizeof(CONST2) is " << sizeof(CONST2) << endl;

    return 0;
}