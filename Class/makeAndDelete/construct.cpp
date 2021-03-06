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
    // 디폴트 파라미터가 있기 때문에 디폴트 생성자가 된다.(자동 생성 되지 않는다.)
    A(int v = 0){
        cout << "A(int) called\n";
        p = v;
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