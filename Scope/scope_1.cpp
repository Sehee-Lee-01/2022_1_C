#include <iostream>
// function prototype은 헤더파일로 만드는 것이 좋다. 설정 용이.
#include "staticGlobalFunc_1.h"
#include "staticGlobalFunc_2.h"
using namespace std;

// scope_2.cpp 프로토타입 선언. 컴파일 순서 때문에 선언 필요.
// void f2(void); 

int f1(int a, int b=1); 
int g1 = 3;

// 참고) 아래와 같이 전역변수를 선언하게 된다면 다른 파일에서 참조 못함.
// static int f1(int a, int b=1); 
// static int g1 = 3;

extern int garray[3]; // scope_2.cpp

int main(){
	extern int i; // scope_2.cpp
	
	for(int j=0; j<2; j++){
		static int i =1;
		i++;
		cout << "inside loop, i = " << i << endl;
	}
	cout << "outside loop, i = " << i << endl;
	
	cout << "f1(i) = " << f1(i) << endl;
	cout << "f1(i) = " << f1(1000,50) << endl;
    f2();
	return 0;
} 

int f1(int a, int b){
	static int c = 100;
	c = a+b+c+g1;
	return c;
}