#include <iostream>
using namespace std;

class Kvector
{
    int *m;
    int len;
public:
    static int total_len;
    Kvector(int sz = 0, int value = 0);
    Kvector(const Kvector& v);
    ~Kvector()
    {
        cout << this << " : ~Kvector()"<< endl;
        delete [] m;
    }
    void print()
    {
        for (int i=0; i<len; i++) cout << m[i] << " ";
        cout << endl;
    }
    void print() const
    {
        for (int i=0; i<len; i++) cout << m[i] << " ";
        cout << endl;
    }
    void clear()
    {
        delete [] m;
        m = NULL;
        len = 0;
    }
    int size(){return len;}
};

int Kvector::total_len = 0;

Kvector::Kvector(int sz, int value)
{
    len = sz;
    m = new int[sz];
    for (int i=0;i<sz;i++)    m[i] = value;
    total_len+=len;
    cout << this << " : Kvector(int, int)\n";
}

Kvector::Kvector(const Kvector& v) 
{
    len = v.len;
    m = new int[len];
    for (int i=0;i<len;i++)    m[i] = v.m[i];
    total_len+=len;
    cout << this << " : Kvector (Kvector&)\n";
}


int main()
{
    Kvector v1(3); v1.print();
    const Kvector v2(2,9); v2.print();
    Kvector v3(v2); v3.print();
    
    cout << "total length = " << Kvector::total_len << endl;
    v2.print();
    v3.print();
    cout << "total_length = " << Kvector::total_len << endl;
    return 0;
}