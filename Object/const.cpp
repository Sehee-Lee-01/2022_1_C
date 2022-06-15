#include <iostream>
using namespace std;

class A
{
    const int c;
    const int hundred = 100;
public:
    A(int n=0): c(n){}
    void display() const 
    {
        cout << this << " ] " << c << ", ";
        cout << hundred << endl;
    }
    void display() // overloading 
    {
        cout << this << " ] " << c << ", ";
        cout << hundred << endl;
    }
    void do_nothing(){}
};
int main()
{
    const A cA;
    // cA.do_nothing();  // no const
    cA.display();
}