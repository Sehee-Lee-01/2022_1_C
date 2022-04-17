#include <iostream>
using namespace std;

//C++ style
int mainCpp(){
    int *p;
    cout << "1. p : " << p << endl;
    p = new int[10];
    cout << "2. p : " << p << endl;
    delete[] p;
    cout << " 3. p : " << p << endl;
    return 0;
}

// C style
int mainC(){
    int *p;
    cout << "1. p : " << p << endl;
    p = (int *)malloc(10*sizeof(int));
    cout << "2. p : " << p << endl;
    free(p);
    cout << " 3. p : " << p << endl;
    return 0;
}