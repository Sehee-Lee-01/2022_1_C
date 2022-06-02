// 초기화 리스트를 사용해야 하는 경우 2) reference 멤버
#include <iostream>
using namespace std;

class A{
    const int c;
    int &r;
public: 
// instance 마다 상수의 값이 다르게 할 수 있음
    A(int &x, int c=0):c(c), r(x) {
        cout << this << " : A(int &, int) called.\n";
    }
    ~A(){cout << this << " : ~A() called\n"; }
    int getR(){return r;}
    int getC(){return c;}
    void setR(int v){r = v;}
};
int g;
A a2(g, 3);
int main(){
    int i = 100;
    A a1(i, 10);
    cout << a1.getR() << endl; a1.setR(-1);
    cout << a1.getR() << " i : " << i << endl; 
    cout << a1.getC() << endl;
    cout << a2.getR() << endl; a2.setR(-2);
    cout << a2.getR() << "g : " << g << endl;
    cout << a2.getC() << endl;
    return 0;
}
