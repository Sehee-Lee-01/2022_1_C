#include <iostream>
using namespace std;

class A {
    int p;
public:
    /*
    A () {
        cout << "A() called\n";
    }
    */
    // A(int v = 0){
    //     cout << "A(int) called\n";
    //     p = v;
    // }
    int getP(){
        return p;
    }
    void setP(int v){
        p = (v<0) ? 0 : v;
    }
};
A a2; // 전역 변수 (0 초기화된다.)
int main(){
    A a1; // 지역변수
    cout << a1.getP() << endl;
    cout << a1.getP() << endl;
}