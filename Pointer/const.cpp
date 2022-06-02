#include <iostream>
using namespace std;
// 컴파일 에러
// void f(int *i){}
// void g(int &i){}

void f(const int *i){}
void g(const int &i){}

int main()
{
    int v;
    f(&v);
    g(v);
    const int one = 1;
    f(&one);
    g(one);
    return 0;
}