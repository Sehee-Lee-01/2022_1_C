#include <iostream>
using namespace std;

class A {
    // 공용 멤버: 어디서든지 객체를 통하여 사용 가능.
    public:
        void f() {
            int i;
            cout << i << " " << a << " " << x << endl;
        }

        int g() {
            return x;
        }

        // 멤버변수 선언;
        // 선언 위치 상관없이 어디서나 사용 가능
        int x;
};

int main(){
    return 0;
} 
