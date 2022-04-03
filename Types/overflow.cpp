#include <iostream>
#include <climits>
using namespace std;

int main(){
	
	short s = SHRT_MAX;
	unsigned short u = USHRT_MAX;
	
	cout << "s : " << s << endl;
	cout << "s+1 : " << (s = s+1) << endl;
	cout << "SHRT_MAX + 1 : " << SHRT_MAX+1 << endl;
	cout << "u : " << u << endl;
	cout << "u+1 : " << (u = u+1) << endl;
	cout << "USHRT_MAX + 1 : " << USHRT_MAX+1 << endl;

	cout << "sizeof(SHRT_MAX+1) : " << sizeof(SHRT_MAX+1) << endl;
	cout << "sizeof(USHRT_MAX+1) : " << sizeof(USHRT_MAX+1) << endl;

	return 0;
} 