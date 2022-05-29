#ifndef _MYRATIONAL_H_ 
#define _MYRATIONAL_H_  
#include <iostream> 
using namespace std;  
class myRational  
{  
public:
    // Constructors (생성자)
    myRational(long num=0, long den=1);
    myRational(const myRational &rat);

    // Accessor Functions (접근자)
    long getNumerator() const;
    long getDenominator() const;
    
    // Member Functions
    // 분수의 역수(기약분수)를 리턴한다.
    myRational reciprocal() const;

    // Overloaded Operators
    // 분수와 분수끼리의 사칙연산 (+, -, *, /)
    // 분수+분수, 분수-분수, 분수*분수, 분수/분수 연산이 가능하다. 
    // 단, 나눗셈에서 0인 분수와의 나눗셈은 0으로 정의한다. 
    myRational operator +(const myRational& number) const;
    myRational operator -(const myRational& number) const;
    myRational operator *(const myRational& number) const;
    myRational operator /(const myRational& number) const;
    
    // 분수와 정수와의 사칙연산 (+, -, *, /)
    // 분수+정수, 분수-정수, 분수*정수, 분수/정수, 정수+분수, 정수-분수, 정수*분수, 정수/분수 연산이 가능하다. 
    // 단, 나눗셈에서 0인 분수 혹은 정수로 나누는 연산의 결과는 0으로 정의한다.
    myRational operator +(int value) const;
    myRational operator -(int value) const;
    myRational operator *(int value) const;
    myRational operator /(int value) const;

    // ++, --
    // 분수를 1증가시키거나, 1감소시킨다. Prefix, Postfix 연산이 가능하다.
    myRational& operator ++();
    myRational& operator --();
    myRational operator ++(int);
    myRational operator --(int);
 
    // Unary -
    // 분수의 부호를 반대로 한다
    myRational operator -(); // unary minus

    // Comparison Operators (<, <=, >, >=, ==, !=) 
    // 비교연산자에서 분수끼리 비교하거나, 분수와 정수를 비교할 수 있다. 
    bool operator ==(const myRational& number) const;
    bool operator !=(const myRational& number) const;
    bool operator >(const myRational& number) const;
    bool operator >=(const myRational& number) const;
    bool operator <(const myRational& number) const;
    bool operator <=(const myRational& number) const;
    
    // Assignment Operators (=, +=, -=, *=, /=)
    // 분수끼리 지정하거나 정수를 지정할 수 있다. 
    // 0에 해당되는 분수나 정수로 나누는 경우에는 그 연산결과를 0으로 정의한다.
    myRational& operator =(const myRational& number);
    myRational& operator +=(const myRational& number);
    myRational& operator -=(const myRational& number);
    myRational& operator *=(const myRational& number);
    myRational& operator /=(const myRational& number);
    myRational& operator =(int value);
    myRational& operator +=(int value);
    myRational& operator -=(int value);
    myRational& operator *=(int value);
    myRational& operator /=(int value);

    // Input, Output Opeartors (>>, <<) 
    friend ostream& operator <<(ostream& outStream, const myRational& number);
    friend istream& operator >>(istream& inStream, myRational& number);

private: 
    // 분수는 항상 내부적으로 기약분수로 표현하며, 또한 항상 _den>0 이다.     
    long _num;          // numerator     
    long _den;          // denominator 

    long gcd(long m, long n);   // 최대공약수     
    void reduce(); 

    friend ostream& operator <<(ostream& outStream, const myRational& number);
    friend istream& operator >>(istream& inStream, myRational& number);
    friend myRational operator +(int value, const myRational& number);
    friend myRational operator -(int value, const myRational& number);
    friend myRational operator *(int value, const myRational& number);
    friend myRational operator /(int value, const myRational& number);
};  
#endif