#include <iostream>
using namespace std;

int main(){
    int *p, *q;
    p = new int;
    cout << "p = " << p << endl;

    q = new int;
    cout << "q = " << q << endl;
    return 0; 
} 

int main2(){
    int *p, *q;
    p = new int;
    cout << "p = " << p << endl;
    //이걸 해주면 heap 이 비어짐 
    delete p;
    
    q = new int;
    cout << "q = " << q << endl;
    return 0; 
} 