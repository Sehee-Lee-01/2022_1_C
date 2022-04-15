#include <iostream>
using namespace std;

int main(){
    int str[10] = {1,2,3,4,5,6,7,8,9};
    int *p, *p2;

    p = str; // same as p = %str[0];
    
    cout << "p : " << (void*)p << "*p : " << *p << endl;
    p++;
    cout << "p : " << (void*)p << "*p : " << *p << endl;
    p += 5;
    cout << "p : " << (void*)p << "*p : " << *p << endl;
    p -= 2;
    cout << "p : " << (void*)p << "*p : " << *p << endl;

    p2 = &str[9];
    cout << "p2 : " << (void*)p2 << "*p2 : " << *p2 << endl;
    cout << "p2 - p : " << p2 - p << "\np < p2 : " << (p<p2) << endl;

    // p2 + p; 주소끼리 더하기는 무의미하다.
} 