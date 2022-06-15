#include <iostream>
#include <cstring>
using namespace std;

class MyString
{
    char *p;
public:
    MyString(const char *str=NULL);
    MyString(char *str=NULL);
    MyString(const MyString& s);
    ~MyString(){delete [] p;}
    void print() const {cout << p << endl;}
    int size() const {return strlen(p);} 
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
    cout << this << " " << str << "] MyString(const char *)\n";
}
MyString::MyString(const MyString& s)
{
    p = new char[s.size()+1];
    strcpy(p, s.p); 
    cout << this << " " << s.p << " ] MyString(const Mystring&)\n";
}

int main()
{
    const MyString s1("const");
    MyString s2("C++");
    MyString s3(s1);
    s1.print();
    s2.print();
    s3.print();
    return 0;
}