#include <iostream>
// function prototype은 헤더파일로 만드는 것이 좋다. 설정 용이.
#include "staticGlobalFunc_1.h"
#include "staticGlobalFunc_2.h"
using namespace std;

// scope_1.cpp 프로토타입 선언. 컴파일 순서 때문에 선언 필요.
// int f1(int a, int b=1); 

/*garray와 i는 프로그램 시작부터 끝날 때까지 lifetime 지속*/
int garray[3];
int i;

/*f2는 전역 scope*/
void f2(void){
	/*g1의 scope는 f2 블록 안*/
	extern int g1; // scope_1.cpp
	cout << "f1(g1,20) = " << f1(g1,20) << endl;
}