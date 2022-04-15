#include <iostream>
#include <climits>
using namespace std;

// call by value
// void f2(int a, int b, int sum, int diff);

//call by reference
int f2(int a, int b=0, int *sum=nullptr, int *diff=nullptr);

int main(){
    int i = 1, j = 2, k, l;
    // call by value
    //f2(i, j, k , l); 
    
    //call by reference
    f2(i, j, &k , &l);
    cout << "k = " << k << endl;
    cout << "l = " << l << endl;
    return 0;
} 
// call by value
/*
void f2(int a, int b, int sum, int diff){
    sum = a+b;
    diff = a-b;
}
*/

//call by reference
int f2(int a, int b, int *sum, int *diff){
    // nullptr 일시 오류 방지
    if (sum==nullptr){
        cout << "Error : sum is a null pointer.\n";
        return INT_MIN;
    }
    if (!diff){
        cout << "Error : diff is a null pointer.\n";
        return INT_MIN;
    }
    
    *sum = a+b;
    *diff = a-b;
    return *sum;
};