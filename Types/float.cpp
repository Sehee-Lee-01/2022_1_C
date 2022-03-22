#include <iostream>
using namespace std;

int main(){
	float f = 1234567890.12345678901234567890;
	double d = 1234567890.12345678901234567890;
	long double ld = 1234567890.12345678901234567890L;
	
	cout << "f = " << f << endl;
	cout << "d = " << d << endl;
	cout << "ld = " << ld << endl;
	
	cout.setf(ios_base::fixed);// 지수표현 쓰지말고 소수점으로 표현하라!
	cout.precision(30);// 소수점 아래 30자리까지 보여달라!
	// 근사치만 보여준다.
	cout << "f = " << f << endl;
	cout << "d = " << d << endl;
	cout << "ld = " << ld << endl;

    return 0;
}