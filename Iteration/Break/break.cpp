#include <iostream>
using namespace std;

int main(){
    double v;

    while(1) {
        cout << "실수 값을 입력해용: ";
        cin >> v;

        if(v<0.0)
            break;
        
        cout << v << "입니다.\n";
    }
    return 0;
}