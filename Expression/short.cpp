#include <stdio.h>
int main(void){
    int x, y, nextx, nexty;
    x = 1; y = 1;
    nextx = ++x; // 사용되기 전 증가 값은 2
    nexty = y++; // 사용된 후 증가 값은 그대로 1
    return 0;
    // nextx = (++x) + (++x); => 정의 되지 않은 결과로 인식
} 
