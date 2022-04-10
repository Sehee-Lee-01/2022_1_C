#include <iostream>
using namespace std;

int x; // 전역변수
extern int y; // 현재 소스 파일의 뒷부분에 선언
extern int z; // 다른 소스파일 변수(extern_2.cpp)

int main(){
	extern int x; // 전역변수 x 참조. 안해도 됨.
	x = 10;
	y = 20;
	z = 30;
	
    return 0;
} 

int y; // 전역변수