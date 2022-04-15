#include <iostream>
using namespace std;

// test: 함수 인자로 reference를 사용해야하는 이유

// call by reference
void f1 (int &return_value){
    return_value = 10;
}

// 인자를 복사하지 않기 위해서
void f2 (const int &param){
    int x = param*param;
}