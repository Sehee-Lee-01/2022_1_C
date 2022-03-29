#include <iostream>
using namespace std;

int main(){
	int i = 9;
	int *p;
	
	p = &i;
	
	int *q = &i;
	
	cout << "p = " << p << endl;
	cout << "q = " << q << endl;
	cout << "sizeof(p) = " << sizeof(p) << endl;
	cout << "sizeof(int *) = " << sizeof(int *) << endl;

	cout << "i = " << i << endl;
	cout << "*p = " << *p << endl;
	cout << "*q = " << *q << endl;
	cout << "&i = " << &i << endl;

	char c = 'a';
	
	char *ptr;
	
	ptr = &c;
	
	cout << "sizeof(char *) is " << sizeof(char *) << endl;
	
}