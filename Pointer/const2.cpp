// 실습 : Kvector class 의 멤버 함수들을 class 외부에 구현하라.
// (1) 생성자 Kvector(int sz, int value) : sz 개의 정수 배열을 m
// 에 할당받아 모든 원소의 값을 value 로 초기화한다.
// sz 가 0인 경우는 m 은 nullptr 이 된다.
// (2) 깊은 복사를 구현하는 복사 생성자
// main() 함수에 대해서 출력이 다음과 같아야 한다.
#include <iostream>
using namespace std;

class Kvector
{
    int *m;
    int len;
public:
    Kvector(int sz=0, int value=0);
    Kvector(Kvector& v);
    ~Kvector()
    {
        cout << this << " : ~Kvector()\n";
        delete [] m;
    }
    void print()
    {
        for(int i=0;i<len;i++) cout << m[i] << " ";
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

Kvector::Kvector(int sz, int value) : len(sz)
{
    m = new int[len];
    for(int i=0;i<len;i++) m[i] = value;
    cout << this << " : Kvector(int)\n";
}

Kvector::Kvector(Kvector& v): len(v.len)
{
    m = new int[len];
    for(int i=0;i<len;i++) m[i] = v.m[i];
    cout << this << " : Kvector(Kvector&)\n";}

int main()
{
    Kvector v1(3); v1.print();
    Kvector v2(2, 9); v2.print();
    Kvector v3(v2); v3.print();
    v2.clear();
    v2.print();
    v3.print();
    return 0;
}