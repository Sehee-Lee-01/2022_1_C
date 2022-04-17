#include <iostream>
using namespace std;
// 주의! 지역변수 r은 함수가 종료되면 소멸 
// 그 주소를 반환하면 안된다.
int *f(int x){ 
    int r;

    r = x+1;
    return &r;
} 

int main(){
    int *p;

    p = f(2);
    cout << *p << endl;
}

//  실행 결과는 Segmentation fault (core dumped)
// ulimit -c unlimited 명령어로 core 용량 늘리고 
// gdb [실행파일명] core 명령어로 확인 가능