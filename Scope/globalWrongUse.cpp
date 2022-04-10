// 전역변수를 잘못 사용하여 프로그램이 복잡해지는 경우
#include <iostream>
using namespace std;

void f(void);
int i;
int main(void){
	for(i=0;i<5;i++){
		f();
	}
    return 0;
} 

void f(void){
	for(i=0; i<10; i++){
		cout << "#";
	}
}

//결과는 i = 11
// "##########"