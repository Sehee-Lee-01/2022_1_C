#include <iostream>
#include <cstring>
using namespace std;

class MyString
{
    char *p;
public:
    MyString(const char *str=NULL);
    MyString(MyString& s);
    ~MyString();
    void print();
    int size();
};
MyString::MyString(const char *str)
{
    if (!str)
    {
        p = new char[1];
        p[0] = '\0';
        return;
    }
    p = new char[strlen(str)+1];
    strcpy(p, str);
}
MyString::MyString(MyString& s)
{
    p = new char[s.size()+1]; // deep copy
    strcpy(p, s.p);
}
MyString::~MyString(){delete [] p;}
void MyString::print(){cout << p << endl;}
int MyString::size(){return strlen(p);}

int main()
{
    MyString s1;
    MyString s2("C++");
    MyString s3(s2);
    s1.print();
    s2.print();
    s3.print();
    return 0;
}