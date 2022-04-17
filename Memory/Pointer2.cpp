#include <iostream>
using namespace std;

int main(){
    int iarr[20], *ip = iarr;
    char carr[20] = "characters", *cp = carr;
    double darr[20], *dp = darr;

    cout << "ip : " << ip << endl;
    cout << "ip+1 : " << ip+1 << endl;
    cout << "cp : " << cp << endl;
    cout << "cp+1 : " << cp+1 << endl;
    cout << "(void *)cp : " << (void *)cp << endl;
    cout << "(void *)(cp+1) : " << (void *)(cp+1) << endl;
    cout << "dp : " << dp << endl;
    cout << "dp+1 : " << dp+1 << endl;

    return 0;
} 