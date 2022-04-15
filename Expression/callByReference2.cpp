#include <iostream>
using namespace std;

int main(){
// 변수의 aliases를 통해 변수 값을 바꿀 수 있다.
int i;
int *p;
p = &i; // 실행문 &는 주소 생성 연산자
int &r = i; // 선언문의 &는 reference의 선언

i = 1;

// 모두 변수 i의 aliases
*p = 2;
r = 3;
} 