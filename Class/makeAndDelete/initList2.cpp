#include <iostream>
using namespace std;

class A{
    int p;
public:
    // 선언과 동시에 초기화되어야 하는 변수(상수)들은 
    // 초기화 리스트로만 초기화할 수 있다.
    A(int v = 0): p(v){
        cout << this << " : A(int) called\n";
    }
    ~A(){
        cout << this << " : ~A() called\n";
    }
    int getP(){
        return p;
    }
};
int main(){
    A v1;
    cout << v1.getP() << endl;
    return 0;
} 