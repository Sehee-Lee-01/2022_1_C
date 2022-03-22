#include <iostream>
using namespace std;

int main(){
	char c = 'a';
	char c1 = '\141';
	char c2 = '\x61';
	
	cout << "c = " << c << endl;
	cout << "c1 = " << c1 << endl;
	cout << "c2 = " << c2 << endl;
	
	cout << "beep charater is " << 7 << endl;
	cin >> c;
	cout << "beep charater is " << '\7' << endl;
	cin >> c;
	cout << "beep charater is " << '\a' << endl;
	
	bool b = true;
	cout << "b = " << b << endl;
	
    return 0;
}