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
    A(const A& obj)
    {
        p = obj.p;
        cout << this << " : A(cost A& called) called\n";
    }
    ~A()
    {
        cout << this << " : ~A() called\n";
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
    cout << a2.getP() << endl; 
}