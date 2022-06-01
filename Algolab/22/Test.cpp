#include <fstream> 
#include <cstdlib> 
#include "MyPolynomial.h"  

void testSimpleCase(); 

int main(void)
{ 
    testSimpleCase(); 
     
    return 0; 
}  
void testSimpleCase() 
{  
    myPolynomial p0, p1(1), p2(1, 1), p3(3, 5);  
    
    int testData4[10] = {1, 0, 1, 1, 1, 2, 1, 3, 1, 4}; 
    int testData5[10] = {-1, 0, -1, 1, -1, 2, -1, 3, -1, 4}; 
    int testData6[10] = {1, 0, -1, 1, 1, 2, -1, 3, 1, 4}; 
    int testData7[10] = {2, 2, 5, 5, 4, 4, 1, 1, 3, 3}; 
    int testData8[12] = {1, 1000000000, 1, 100000000, 1, 1000000, 1, 10000, 1, 100, 1, 0}; 
    
    myPolynomial p4(5, testData4); 
    myPolynomial p5(5, testData5); 
    myPolynomial p6(5, testData6); 
    myPolynomial p7(5, testData7); 
    myPolynomial p8(6, testData8); 
    myPolynomial p9(p7);  
    
    cout <<p4 + p5 << endl; //NO+
    // cout << p6 - p7 << endl; //NO-
    
    myPolynomial tmp1(p4), tmp2, tmp3, tmp4; 
    tmp4 = tmp3 = tmp2 = tmp1; 
    
    // cout << (tmp1 += p5) << endl; //NO+
    // cout << (tmp2 -= p5) << endl; //NO-
} 
 
