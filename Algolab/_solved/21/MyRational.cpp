#include <cmath>
#include <cstdlib>
#include "MyRational.h"  

// Constructors (생성자)
myRational::myRational(long num, long den)
{
    _num = num;
    _den = den;
    reduce();
}
myRational::myRational(const myRational &rat)
{
    _num = rat._num;
    _den = rat._den;
    reduce();
}

// Accessor Functions (접근자)
long myRational::getNumerator() const
{
    return _num;
}
long myRational::getDenominator() const
{
    return _den;
}

// Member Functions
// 분수의 역수(기약분수)를 리턴한다.
myRational myRational::reciprocal() const
{
    return myRational(_den, _num);
}

// Overloaded Operators
// 분수와 분수끼리의 사칙연산 (+, -, *, /)
// 분수+분수, 분수-분수, 분수*분수, 분수/분수 연산이 가능하다. 
// 단, 나눗셈에서 0인 분수와의 나눗셈은 0으로 정의한다. 
myRational myRational::operator +(const myRational& number) const
{
    long num = _num*number._den + _den*number._num;
    long den = _den*number._den;
    return myRational(num, den);
}
myRational myRational::operator -(const myRational& number) const
{
    long num = _num*number._den - _den*number._num;
    long den = _den*number._den;
    return myRational(num, den);
}
myRational myRational::operator *(const myRational& number) const
{
    long num = _num*number._num;
    long den = _den*number._den;
    return myRational(num, den);
}
myRational myRational::operator /(const myRational& number) const
{
    long num = _num*number._den;
    long den = _den*number._num;
    return myRational(num, den);
}

// 분수와 정수와의 사칙연산 (+, -, *, /)
// 분수+정수, 분수-정수, 분수*정수, 분수/정수, 정수+분수, 정수-분수, 정수*분수, 정수/분수 연산이 가능하다. 
// 단, 나눗셈에서 0인 분수 혹은 정수로 나누는 연산의 결과는 0으로 정의한다.
myRational myRational::operator +(int value) const
{
    long num = _num + _den*value;
    return myRational(num, _den);
}
myRational myRational::operator -(int value) const
{
    long num = _num - _den*value;
    return myRational(num, _den);
}
myRational myRational::operator *(int value) const
{
    int num = _num*value;
    return myRational(num,_den);
}
myRational myRational::operator /(int value) const
{
    int den = _den*value;
    return myRational(_num,den);
}

myRational operator +(int value, const myRational& number)
{
    long num = number._den*value + number._num;
    return myRational(num, number._den);
}
myRational operator -(int value, const myRational& number)
{
    long num = number._den*value - number._num;
    return myRational(num, number._den);
}
myRational operator *(int value, const myRational& number)
{
    long num = value*number._num;
    return myRational(num, number._den);
}
myRational operator /(int value, const myRational& number)
{
    long num = value*number._den;
    return myRational(num, number._num);
}

// ++, --
// 분수를 1증가시키거나, 1감소시킨다. Prefix, Postfix 연산이 가능하다.
myRational& myRational::operator ++()
{
    _num+=_den;
    reduce();
return *this;
}
myRational& myRational::operator --()
{
    _num-=_den;
    reduce();
    return *this;
}
myRational myRational::operator ++(int)
{
    myRational tmp(*this);
    operator++();
    return tmp;
}
myRational myRational::operator --(int)
{
    myRational tmp(*this);
    operator--();
    return tmp;
}

// Unary -
// 분수의 부호를 반대로 한다
myRational myRational::operator -()
{
    return myRational(-_num, _den);
} 

// Comparison Operators (<, <=, >, >=, ==, !=) 
// 비교연산자에서 분수끼리 비교하거나, 분수와 정수를 비교할 수 있다. 
bool myRational::operator ==(const myRational& number) const
{
    return (_num == number._num)&&(_den == number._den);
}
bool myRational::operator !=(const myRational& number) const
{
    return !(*this == number);
}
bool myRational::operator >(const myRational& number) const
{
    long num1 = _num*number._den;
    long num2 = number._num*_den;
    return (num1 > num2);
}
bool myRational::operator >=(const myRational& number) const
{
    long num1 = _num*number._den;
    long num2 = number._num*_den;
    return (num1 >= num2);
}
bool myRational::operator <(const myRational& number) const
{
    long num1 = _num*number._den;
    long num2 = number._num*_den;
    return (num1 < num2);
}
bool myRational::operator <=(const myRational& number) const
{
    long num1 = _num*number._den;
    long num2 = number._num*_den;
    return (num1 <= num2);
}

// Assignment Operators (=, +=, -=, *=, /=)
// 분수끼리 지정하거나 정수를 지정할 수 있다. 
// 0에 해당되는 분수나 정수로 나누는 경우에는 그 연산결과를 0으로 정의한다.
myRational& myRational::operator =(const myRational& number)
{
    this -> _num = number._num;
    this -> _den = number._den;
    return *this;
}
myRational& myRational::operator +=(const myRational& number)
{
    this -> _num = this -> _num*number._den + _den*number._num;
    this -> _den = this -> _den*number._den;
    reduce();
    return *this;
}
myRational& myRational::operator -=(const myRational& number)
{
    this -> _num = this -> _num*number._den - _den*number._num;
    this -> _den = this -> _den*number._den;
    reduce();
    return *this;
}
myRational& myRational::operator *=(const myRational& number)
{
    this -> _num = _num*number._num;
    this -> _den = _den*number._den;
    reduce();
    return *this;
}
myRational& myRational::operator /=(const myRational& number)
{
    this -> _num = _num*number._den;
    this -> _den = _den*number._num;
    reduce();
    return *this;
}
myRational& myRational::operator =(int value)
{
    this -> _num = value;
    this -> _den = 1;
    return *this;
}
myRational& myRational::operator +=(int value)
{
    this -> _num = _num + _den*value;
    reduce();
    return *this;
}
myRational& myRational::operator -=(int value)
{
    this -> _num = _num - _den*value;
    reduce();
    return *this;
}
myRational& myRational::operator *=(int value)
{
    this -> _num = _num*value;
    reduce();
    return *this;
}
myRational& myRational::operator /=(int value)
{
    this -> _den = _den*value;
    reduce();
    return *this;
}


// private function
// 분수는 항상 내부적으로 기약분수로 표현하며, 또한 항상 _den>0 이다.     
long myRational::gcd(long m, long n) 
{     
    if (m == n) 
        return n;     
    else if (m < n)         
        return gcd(m, n-m); 
    else         
    return gcd(m-n, n); 
} 
 
 void myRational::reduce() 
{ 
    if (_num == 0 || _den == 0)     
    {         
        _num = 0; 
        _den = 1;         
        return;     
    } 
    
    if (_den < 0)     
    {         
        _den *= -1; 
        _num *= -1;     
    }     
    if (_num == 1) 
        return;      
    
    int sgn = (_num < 0 ? -1 : 1); 
    long g = gcd(sgn * _num, _den);     
    _num /= g;     
    _den /= g; 
}

ostream &operator <<(ostream &outStream, const myRational& r) 
{     
    if (r._num == 0) 
        outStream << 0; 
    else if (r._den == 1)         
        outStream << r._num; 
    else 
        outStream << r._num << "/" << r._den ;  
    
    return outStream; 
}  

istream &operator >>(istream &inStream, myRational& r) 
{  
    inStream >> r._num >> r._den; 
    
    if (r._den == 0)     
    { 
        r._num = 0;
        r._den = 1;     
    }     
    r.reduce();  
    
    return inStream; 
}  