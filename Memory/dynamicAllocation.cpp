#include <iostream>
using namespace std;

int main(){
    int *p; // 동적 메모리를 가리키는 포인터

    p = new int; // 동적 메모리 할당

    *p = 100; // 동적 메모리 사용
    delete p; // 동적 메모리 반납

    int *q = new int; // 반납된 메모리 재사용 가능 
    return 0;
} 

// p == nullptr 이면 delete는 아무 것도 하지 않는다. not error