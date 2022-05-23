#include <iostream>
using namespace std;

class A {
    int p;
public:
    A(int v = 0){
        cout << this << " : A(int) called\n";
        p = v;
    }
    // 없음 자동생성
    ~A(){
        cout << this << " : ~A() called\n";
    }
    int getP(){
        return p;
    }
    void setP(int v){
        p = (v<0) ? 0 : v;
    }
};

int main(){
    A a1, a2(10);
    cout << a1.getP() << endl;
    cout << a1.getP() << endl;
}