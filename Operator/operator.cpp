#include <iostream>
using namespace std;
enum



int main(){
	Complex x(2,3);
	Complex y(-1,-3), z;
	
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	z = x++;
	
	cout << "x = " << x << endl;
	cout << "z = " << z << endl;
	z = ++x;
	
	cout << "x = " << x << endl;
	cout << "z = " << z << endl;
	z += x;
	
	cout << "x = " << x << endl;
	cout << "z = " << z << endl;
	z[IM] = x[RE];
	
	cout << "z = " << z << endl;
	
} 