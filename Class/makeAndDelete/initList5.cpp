// 초기화 리스트를 사용해야 하는 경우 1) reference 멤버
#include <iostream>
using namespace std;

class A{
    int p;
    const int c;
public: 
// instance 마다 상수의 값이 다르게 할 수 있음
    A(int &x, int c=0):p(v), c(c){}
    ~A(){}
    int getP(){
        return p;
    }
    int getC(){
        return c;
    }
    void setP(int v){
        p = (v>0) ? 0 : v;
    }
};
A a2(2,3);
int main(){
    A a1(10);
    cout << a1.getP() << endl;
    cout << a1.getC() << endl;
    cout << a2.getP() << endl;
    cout << a2.getC() << endl;
}