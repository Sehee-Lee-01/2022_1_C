#include <iostream>
#include <ostream>
using namespace std;

class A
{
    int p;
public:
    A(int v =0) : p(v)
    {
        cout << this << " : A(int " << v << " ) \n";
    }
    A(const A& obj)
    {
        p = obj.p;
        cout << this << " : A(cost A& "<< &obj << ") called\n";
    }
    ~A()
    {
        cout << this << " : ~A() \n";
    }
    int getP()
    {
        return p;
    }
    void setP(int v)
    {
        p = (v<0) ? 0: v;
    }
    A return_this()
    {
        return *this;
    }
};

A plusOne(A c)
{
    A result(c.getP()+1);
    return result;
}

int main()
{
    A a1(10), a2(a1);
    cout << a1.getP() << endl;
    cout << a2.getP() << endl; 
    a2 = plusOne(a1).return_this();
    cout << a2.getP() << endl;
    return 0;
}