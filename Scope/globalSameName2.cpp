// with gdb
#include <iostream>
using namespace std;

void f1(int a, int b=1);
int g1;
int garray[3];

int main(){
	int i =100, a[3]; // 변수 i 1
	
	{
		int i; // 변수 i 2
		i = 1;
		a[0] = 20;
	}
	cout << " i = " << i << endl;
	
	for(int i =0; i < 3; i++){} // 변수 i 3
	cout << " i = " << i << endl;
	
	f1(i);
    return 0;
} 

void f1(int a, int b){
	int c = 100;
	a = a + b + c;
}