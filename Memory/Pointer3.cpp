#include <iostream>
using namespace std;

void sub1(int a[]){
    // 여기서는 로컬 변수 취급 받아서 +=1 가능
    // 아래와 똑같이 취급 
    a += 1;
    *a = 1;
}

void sub2(int *a){
    // 여기서는 변수 취급 받아서 +=1 가능 
    // 위와 똑같이 취급 
    a+=1;
    *a = 2;
}

int main(){
    int a[10];
    // a +=1; 여기서는 에러 => a = &a[0]을 의미하기 때문이다.
    // 치환문의 Left value로 올 수 없다. 
    sub1(a);
    cout << a[1] << endl;
    sub2(a);
    cout << a[1] << endl;
}