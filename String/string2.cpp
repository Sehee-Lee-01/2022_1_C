#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1;
    string s2("I");
    string s3 = s2;
    string s4 = "you";

    cout << "s1 : \"" << s1 << "\" size " << s1.size() << endl;
    cout << "s2 : \"" << s2 << "\" size " << s2.size() << endl;
    cout << "s3 : \"" << s3 << "\" size " << s3.size() << endl;
    cout << "s4 : \"" << s4 << "\" size " << s4.size() << endl;

    s1 = s2 + " and " + s4; // 더하기 가능
    cout << "s1 : \"" << s1 << "\" size " << s1.size() << endl;
    s1.clear();
    cout << "s1 : \"" << s1 << "\" size " << s1.size() << endl;
    cout << "is s1 empty? " << s1.empty() << endl;

    s4[0] = 'Y'; // 치환 가능
    cout << "s4 : \"" << s4 << "\" size " << s4.size() << endl;

    //find
    s1 = "abcdefghijklmnopqrstuvwxyz";
    int i = s1.find('c');
    cout << "c is the " << i << "-th alphabet. \n";
    i = s1.find('c', i+1);
    cout << "the next c is the " << i << "-th alphabet. \n";
    i = s1.find("efg");
    cout << "efg starts at " << i << "-th alphabet. \n";
    
    // 논리 연산     
    cout << s2 << " < " << s4 << " : " << (s2 < s4) << endl;
    cout << s2 << " == " << s4 << " : " << (s2 == s4) << endl;

    // insert, erase
    cout << "write a zord to insert : ";
    cin >> s3;
    s1.insert(0, s3);
    cout << " s1 : \"" << s1 << "\" size " << s1.size() << endl;
    s1.erase(1,3);
    cout << " s1 : \"" << s1 << "\" size " << s1.size() << endl;

    return 0;
} 