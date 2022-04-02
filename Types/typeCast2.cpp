#include <iostream>
using namespace std;

int main(){
    // 명시적 형변환
    int i,j; float y,f;
    f = i + j;
    f = (double)(i+j);
    f = (double)i  + (double)j;
    f = (double)((int)y+ 3);
    f = (float)(i=5);
    // 결국에는 float로 저장 
    return 0;
} 