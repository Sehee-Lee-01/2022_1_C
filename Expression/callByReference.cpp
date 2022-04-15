#include <iostream>
using namespace std;

int f3(int a, int b, int &sum, int &diff);

int main(){
    int i=1, j=2, k=10, l=11;

    f3(i,j,k,l);

    cout << "k = " << k << endl;
    cout << "l = " << l << endl;
    return 0;
} 

// reference의 사용은 함수의 인자로만 사용!
// 선언문에서만 초기화 가능
// 변수명으로 초기화 해야함.
int f3(int a, int b, int &sum, int &diff){
    sum = a+b;
    diff = a-b;
    return sum;
}