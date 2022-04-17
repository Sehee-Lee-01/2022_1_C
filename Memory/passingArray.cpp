#include <iostream>
using namespace std;

void f(int *p){ // f(int p[])
    p[0] = 10;
    p[1] = 20;
    p[3] = 30;
} 

int main(){
    int a[3] = {0};

    cout << (a == &a[0]) << endl;
    f(a); // same as f($a[0]);
    cout << "a[0] = " << a[0] << endl;
    cout << "a[1] = " << a[1] << endl;
    cout << "a[2] = " << a[2] << endl;
}