#include <iostream>
using namespace std;

// 인덱스 접근 
int index(int a[], int n){
    int i;
    int sum = 0;

    for(i=0;i<n;i++)
        sum +=a[i];
    return sum;
} 

// 포인터 접근(더 빠르다)
int pointer(int a[], int n){
    int i;
    int *p;
    int sum = 0;

    p = a;
    for(i=0;i<n;i++)
        sum += *p++;
        // sum += *p;
        //*p += 1;
    return sum;
} 