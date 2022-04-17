#include <iostream>
using namespace std;

int main(){
    int *p = new int;
    *p = 0x43;
    // delete p;
    
    p = new int;
    *p = 0x63;

    return 0;
} 