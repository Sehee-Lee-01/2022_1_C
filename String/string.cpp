#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1, s2 = "xxx";

    s1 = "12";
    cout << "length of " << s1 << " is " << s1.length() << endl;

    s2 = s1 + "ab";
    cout << "length of " << s2 << " is " << s2.size() << endl;
} 