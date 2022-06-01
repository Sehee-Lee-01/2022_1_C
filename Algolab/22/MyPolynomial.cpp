#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <list> 
#include "MyPolynomial.h"  
#include "MyTerm.h"

myPolynomial::myPolynomial(int c, unsigned int e) : numTerms(1), degree(e)
{
    termList.push_back(myTerm(c,e));
} 

myPolynomial::myPolynomial(int nTerms, int mono[])
{
    for (int i=0; i < nTerms; i++)
    {
        termList.push_back(myTerm(mono[2*i],mono[2*i+1]));
    }
    termList.sort();

    numTerms = nTerms;
    degree = termList.front().getExp();
}

// copy constructor 
myPolynomial::myPolynomial(const myPolynomial &poly) : degree(poly.degree), numTerms(poly.numTerms), termList(poly.termList)
{
} 

// get a degree of the polynomial  
int myPolynomial::getDegree() const
{
    return degree;
}     

// number of terms in the polynomial 
unsigned int myPolynomial::getNumTerms() const
{
    return numTerms;
} 

// member func
myPolynomial myPolynomial::ddx() const
{
    int mono[numTerms*2];
    int i = 0;
    for (myTerm element : termList)
    {
        myTerm ddx_element = element.ddx();
        mono[2*i] = ddx_element.getCoeff();
        mono[2*i+1] = ddx_element.getExp();
        i++;
    }
    return myPolynomial(numTerms, mono);
}
// overloaded operators
myPolynomial myPolynomial::operator +(const myPolynomial &poly) const
{
    list<int> expList;
    int coeffList[expList.size()], i=0;
    for(myTerm element : termList){expList.push_back(element.exp);}
    for(myTerm element : poly.termList){expList.push_back(element.exp);}
    expList.sort(); 
    expList.unique(); 
    expList.reverse();
    int numExp = expList.size();
    int mono[2*numExp];

    for (int exp: expList)
    {
        int coeff1=0, coeff2=0;
        for(myTerm element : termList) {if(exp == element.exp) coeff1 = element.coeff;}
        for(myTerm element : poly.termList) {if(exp == element.exp) coeff2 = element.coeff;}
        coeffList[i] = coeff1 + coeff2;
        // cout << endl <<"exp" << i << " : "<< exp << endl;
        // cout << " coeff1: " << coeff1 << endl <<" coeff2: " << coeff2 << endl;
        // cout << "coeffList["<<i<<"]: " << coeffList[i] << endl;
        i++;
    } 
    // cout << "(***)coeffList[0]: " << coeffList[0] << endl;
    // // int mono[2*numExp]; 
    // 왜 갑자기 coeffList[0] = 10으로 바뀔가요..?
    // cout << "(***)coeffList[0]: " << coeffList[0] << endl;
    list<int>::iterator iter = expList.begin();
    for (i=0;i<numExp;i++)
    {
        // cout << "coeffList["<<i<<"]: " << coeffList[i] << " *iter: " << *iter << endl; 
        mono[2*i] = coeffList[i];
        mono[2*i+1] = *iter;
        iter++;
    }
    return myPolynomial(numExp,mono);
}
myPolynomial myPolynomial::operator -(const myPolynomial &poly) const
{
    myPolynomial minus = -poly;
    myPolynomial result = *this + minus;
    return result;
}

myPolynomial myPolynomial::operator *(const myPolynomial &poly) const
{
    list<int> expList;
    for(myTerm element1 : termList)
    {
        for(myTerm element2 : poly.termList) 
            expList.push_back(element1.exp + element2.exp); 
    }
    expList.sort();
    expList.unique(); 
    expList.reverse();
    int numExp = expList.size();
    int mono[2*numExp];
    int coeffList[numExp];
    for (int i=0;i<numExp;i++) coeffList[i]=0;
    int i=0;
    for(int exp : expList)
    {
        for(myTerm element1 : termList)
        {
            for(myTerm element2 : poly.termList)
            {
                if(exp == (element1.exp + element2.exp)) 
                    coeffList[i] += element1.coeff*element2.coeff;
            }
        }
        // cout << endl <<"exp" << i << " : "<< exp << endl;
        // cout << "coeffList["<<i<<"]: " << coeffList[i] << endl;
        i++;
    }
    
    // int mono[numExp*2];
    // cout << "(***)coeffList[0]: " << coeffList[0] << endl;
    list<int>::iterator iter = expList.begin();
    for (i=0;i<numExp;i++)
    {
        // cout << "coeffList["<<i<<"]: " << coeffList[i] << " *iter: " << *iter << endl; 
        mono[2*i] = coeffList[i];
        mono[2*i+1] = *iter;
        iter++;
    }
    return myPolynomial(numExp,mono);
}
myPolynomial myPolynomial::operator *(int k) const
{
    int mono[numTerms*2];
    int i = 0;
    for (myTerm element : termList)
    {
        mono[2*i] = k*element.getCoeff();
        mono[2*i+1] = element.getExp();
        i++;
    }
    return myPolynomial(numTerms, mono);
}
//다항식 계산 연산자 ( () )
long myPolynomial::operator() (int x) const
{
    long result = 0;
    for (myTerm element : termList)
    {
        result += element.getCoeff()*pow(x, element.getExp());
    }
    return result;
}
myPolynomial myPolynomial::operator -() const
{
    int mono[numTerms*2];
    int i=0;
    for (myTerm element : termList)
    {
        mono[2*i] = -1*element.getCoeff();
        mono[2*i+1] = element.getExp();
        i++;
    }
    return myPolynomial(numTerms, mono);
}
bool myPolynomial::operator == (const myPolynomial &poly) const
{ 
    if (degree != poly.degree) return false;
    else if (numTerms != poly.numTerms) return false;
    else
    {
        myTerm this_list[numTerms], poly_list[poly.numTerms];
        int i=0; 
        for (myTerm element : termList) {this_list[i] = element; i++;}
        i=0;
        for (myTerm element : poly.termList) {poly_list[i] = element; i++;}
        for (i=0;i<numTerms;i++)
        {
            if((this_list[i].coeff != poly_list[i].coeff)||(this_list[i].exp != poly_list[i].exp))
                return false;
        }
        return true;
    }
}
bool myPolynomial::operator != (const myPolynomial &poly) const
{
    return !(*this == poly);
}
myPolynomial& myPolynomial::operator = (const myPolynomial &poly)
{
    this -> degree = poly.degree;
    this -> numTerms = poly.numTerms;
    this -> termList = poly.termList;
    return *this;
}
myPolynomial& myPolynomial::operator += (const myPolynomial &poly)
{
    return *this = *this + poly;
}
myPolynomial& myPolynomial::operator -= (const myPolynomial &poly)
{
    return *this = *this - poly;
}
myPolynomial& myPolynomial::operator *= (const myPolynomial &poly) 
{
    return *this = *this*poly;
}
myPolynomial& myPolynomial::operator *= (int k)
{
    return *this = *this*k;
}

// output operator 
myPolynomial operator *(int k, const myPolynomial &poly)
{
    int mono[poly.numTerms*2];
    int i = 0;
    for (myTerm element : poly.termList)
    {
      mono[2*i] = k*element.getCoeff();
      mono[2*i+1] = element.getExp();
      i++;
    }
    return myPolynomial(poly.numTerms, mono);
}

ostream& operator <<(ostream &outStream, const myPolynomial& poly) 
{ 
    if (poly == myPolynomial::ZERO) 
        return outStream << 0;  
    else if (poly == myPolynomial::ONE)
        return outStream << 1;
    else
    {
        for (myTerm element: poly.termList)
        {
            if((poly.termList.front() == element) || (element.getCoeff() < 0)) 
                outStream << element;
                
            else 
            {
                if (element.getCoeff() != 0)
                {
                    outStream << "+" << element;
                }
            }
        }
        return outStream;
    }
} 
 
const myPolynomial myPolynomial::ZERO(0); // the zero polynomial P(x) = 0 
const myPolynomial myPolynomial::ONE(1, (unsigned)0); // the monomial P(x) = 1 
const myPolynomial myPolynomial::X(1, 1); // the monomial P(x) = x