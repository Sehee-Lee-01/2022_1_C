#include <iostream>
using namespace std;
// 동적할당 주소는 반환 가능
int *f(int x){ 
    int *q = new int;

    *q = x+  1;
    return q;
} 

int main(){
    int *p;

    p = f(2);
    cout << *p << endl;
}
