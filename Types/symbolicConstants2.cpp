#include <iostream>
#include <climits>
using namespace std;

int main(){
	
	cout << "range of short type variable : " << SHRT_MIN << "~" << SHRT_MAX << endl;
	cout << "range of unsigned short type variable : " << 0 << "~" << USHRT_MAX << endl;
	cout << "range of int type variable : " << INT_MIN << "~" << INT_MAX << endl;
	cout << "range of long type variable : " << LONG_MIN << "~" << LONG_MAX << endl;
	cout << "range of long long type variable : " << LLONG_MIN << "~" << LLONG_MAX << endl;

	cout << "sizeof(long) : " << sizeof(long) << endl;
	cout << "sizeof(long long) : " << sizeof(long long) << endl;//컴터마다 다름

	return 0;
} 