#include <iostream>
#include <cfloat>
using namespace std;

int main(){
	cout << "range of float type variable : " << FLT_MIN << "~" << FLT_MAX << endl;
	cout << "range of double type variable : " << DBL_MIN << "~" << DBL_MAX << endl;
	cout << "range of long double type variable : " << LDBL_MIN << "~" << LDBL_MAX << endl;

	cout << "FLT_EPSILON : " << FLT_EPSILON << endl;
	cout << "DBL_EPSILON : " << DBL_EPSILON << endl;
	cout << "LDBL_EPSILON : " << LDBL_EPSILON << endl;

	float f = 1e39;
	cout << "f : " << f << endl;
	f = 1e-390;
	cout << "f : " << f << endl;
	return 0;
} 