#include <iostream>
using namespace std;

int f1(int a, int b=0);

int main(){
    int i = 1, j = 2, k ;

    k = f1(i,j);
    
    cout << "k = " << k << endl;
    return 0;
} 

// 값에 의한 호출 
int f1(int a, int b){
    a += b;
    return a;
}