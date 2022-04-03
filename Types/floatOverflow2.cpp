#include <iostream>
using namespace std;

int main(){
	
	float f = 1234567890.12345678901234567890;
	double d = 1234567890.12345678901234567890;
	long double ld = 1234567890.12345678901234567890L;
	
	cout << "f = " << f << endl;
	cout << "d = " << d << endl;
	cout << "ld = " << ld << endl;

	cout.setf(ios_base::fixed);
	cout.precision(30);
	cout << "f = " << f << endl;
	cout << "d = " << d << endl;
	cout << "ld = " << ld << endl;

    return 0;
} 