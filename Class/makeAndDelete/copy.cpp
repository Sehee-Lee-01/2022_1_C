#include <iostream>
#include <ostream>
#include <iostream>
using namespace std;

class A
{
    int p;
public:
    A(int v =0) : p(v)
    {
        cout << this << " : A(int) called\n";
    }
    int getP()
    {
        return p;
    }
    void setP(int v)
    {
        p = (v<0) ? 0: v;
    }
};
int main()
{
    A a1(10), a2(a1);
    cout << a1.getP() << endl;
    cout << a2.getP() << endl; // default copy constructor 호출
}