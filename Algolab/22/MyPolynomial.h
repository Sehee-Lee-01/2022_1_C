#ifndef _MYPOLYNOMIAL_H_ 
#define _MYPOLYNOMIAL_H_ 
#include <iostream> 
#include <list> 
#include "MyTerm.h" 
using namespace std; 
 
class myPolynomial 
{ 
public: 
    myPolynomial(int c = 0, unsigned int e = 0); 
    myPolynomial(int nTerms, int mono[]);  
    // copy constructor 
    myPolynomial(const myPolynomial &poly); 
    
    // Accessor Functions (접근자), Mutator Functions(수정자) 
    int getDegree() const;     // get a degree of the polynomial  
    unsigned int getNumTerms() const; // number of terms in the polynomial 
    // void setCoeff(int c);

    // member func
    myPolynomial ddx() const;  // derivative of a polynomial 

    // overloaded operators
    myPolynomial operator +(const myPolynomial &poly) const; 
    myPolynomial operator -(const myPolynomial &poly) const; 
    
    myPolynomial operator *(const myPolynomial &poly) const; 
    
    myPolynomial operator *(int k) const; 
    
    //다항식 계산 연산자 ( () )
    long operator() (int x) const; // evaluate the polynomial 

    myPolynomial operator -() const; 

    bool operator == (const myPolynomial &poly) const; 
    bool operator != (const myPolynomial &poly) const; 

    myPolynomial& operator = (const myPolynomial &poly); 
    myPolynomial& operator += (const myPolynomial &poly); 
    myPolynomial& operator -= (const myPolynomial &poly); 
    myPolynomial& operator *= (const myPolynomial &poly); 
    myPolynomial& operator *= (int k);  
      
    
    // friend operators and functions 
    friend myPolynomial operator *(int k, const myPolynomial &poly); 
    
    friend ostream& operator <<(ostream &outStream, const myPolynomial &poly); 
    
    static const myPolynomial ZERO;   // P(x) = 0 
    static const myPolynomial ONE;    // P(x) = 1 
    static const myPolynomial X;      // P(x) = x 

private: 
    int degree;     // maximum expnent  
    unsigned int numTerms;
    list<myTerm> termList;
}; 
#endif //_MYPOLYNOMIAL_H_