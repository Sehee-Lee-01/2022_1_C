#include "MyComplex.h"
#include <cmath>
#include <cstdlib>  
// Constructor 
myComplex::myComplex(int real, int imag) { 
    realPart = real; 
    imaginaryPart = imag; 
}  

// Copy constructor 
myComplex::myComplex(const myComplex& number) {
    realPart = number.realPart; 
    imaginaryPart = number.imaginaryPart; 
} 

// Accessor functions 
int myComplex::getRealPart() const {
    return realPart;
}
int myComplex::getImaginaryPart() const {
    return imaginaryPart; 
}  
// Mutator functions 
void myComplex::setRealPart(int real) { 
    realPart = real; 
}  
void myComplex::setImaginaryPart(int imag) 
{ 
    imaginaryPart = imag; 
} 
void myComplex::set(int real, int imag) { 
    realPart = real; 
    imaginaryPart = imag; 
}

// ++
myComplex& myComplex:: operator++(){ re++; return *this;}
myComplex myComplex::operator++(int){myComplex t(*this); operator++(); return t;} 
myComplex& myComplex:: operator--(){ re--; return *this;}
myComplex myComplex::operator--(int){myComplex t(*this); operator--(); return t;} 
myComplex& myComplex::operator+=(const myComplex& c){realPart+= c.realPart; imaginaryPart+= c.imaginaryPart; return *this;}
myComplex& myComplex::operator +=(int value){realPart+= value; return *this;}
myComplex& myComplex::operator-=(const myComplex& c){realPart-= c.realPart; imaginaryPart-= c.imaginaryPart; return *this;}
myComplex& myComplex::operator -=(int value){realPart-= value; return *this;}
myComplex& myComplex::operator*=(const myComplex& c){
    int ac = realPart * c.realPart;  
    int bd = imaginaryPart * c.imaginaryPart;
    int ad = realPart* c.imaginaryPart;
    int bc = imaginaryPart* c.realPart; 
    realPart = ac - bd; imaginaryPart= ad + bc; 
    return *this;
}
myComplex& myComplex::operator *=(int value){
    realPart = realPart * value;
    imaginaryPart = imaginaryPart * value;
    return *this;
}

// Overloaded binary operators 
myComplex myComplex::operator +(const myComplex& number) const 
{ 
    int newReal = realPart + number.realPart;  
    int newImag = imaginaryPart + number.imaginaryPart; 
    return myComplex (newReal, newImag); 
 }
myComplex myComplex::operator +(int value) const 
{ 
    return myComplex(value) + (*this); 
}
myComplex operator+(int value, const myComplex& number){
    myComplex result(value + number.realPart, number.imaginaryPart);
    return result;
}
myComplex myComplex::operator -(const myComplex& number) const 
{ 
    int newReal = realPart - number.realPart;  
    int newImag = imaginaryPart - number.imaginaryPart; 
    return myComplex (newReal, newImag); 
 }
myComplex myComplex::operator -(int value) const 
{ 
    return (*this) - myComplex(value); 
}
myComplex operator-(int value, const myComplex& number){
    myComplex result(value - number.realPart, - number.imaginaryPart);
    return result;
}
myComplex myComplex::operator *(const myComplex& number) const 
{ 
    int ac = realPart * number.realPart;  
    int bd = imaginaryPart * number.imaginaryPart;
    int ad = realPart* number.imaginaryPart;
    int bc = imaginaryPart* number.realPart; 
    return myComplex (ac - bd, ad + bc); 
 }
myComplex myComplex::operator *(int value) const 
{ 
    return myComplex(value) * (*this); 
}    
myComplex operator*(int value, const myComplex& number){
    myComplex result(value * number.realPart, value * number.imaginaryPart);
    return result;
}

// Assignment operators 
myComplex& myComplex::operator =(const myComplex& number) 
{ 
    this->realPart = number.realPart;  
    this->imaginaryPart = number.imaginaryPart; 
    return *this; 
 }  
myComplex& myComplex::operator =(int value) 
{  
    realPart = value; 
    imaginaryPart = 0; 
    return *this; 
 } 

// Overloading comparison operators 
bool myComplex::operator ==(const myComplex& number) const 
{  
    return (realPart == number.realPart) &&  
    (imaginaryPart == number.imaginaryPart); 
}
bool myComplex::operator !=(const myComplex& number) const 
{  
    return (realPart != number.realPart) ||  
    (imaginaryPart != number.imaginaryPart); 
}  
bool myComplex::operator >(const myComplex& number) const 
{ 
    return norm() > number.norm(); 
} 
bool myComplex::operator >=(const myComplex& number) const 
{ 
    return norm() >= number.norm(); 
} 
bool myComplex::operator <(const myComplex& number) const 
{ 
    return norm() < number.norm(); 
} 
bool myComplex::operator <=(const myComplex& number) const 
{ 
    return norm() <= number.norm(); 
} 

// Overloaded unary operators 
myComplex myComplex::operator -()  // unary minus 
{ 
    return myComplex(-realPart, -imaginaryPart); 
 }
 myComplex myComplex::operator ~()
{ 
    return myComplex(realPart, -imaginaryPart); 
 }

// private function 
int myComplex::norm() const { 
    return realPart * realPart + imaginaryPart * imaginaryPart; 
}  
ostream &operator <<(ostream &outStream, const myComplex& number) 
{  
    outStream << "(" << number.realPart << "," << number.imaginaryPart << ")"; 
    return outStream; 
}  
istream &operator >>(istream &inStream, myComplex& number) 
{ 
    inStream >> number.realPart >> number.imaginaryPart; 
    return inStream; 
}