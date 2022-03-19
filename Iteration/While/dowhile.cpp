#include <iostream>
using namespace std;

int main(){
    int i = 10;
    do {
        cout << "i의 값: " << i << endl;
        i++;
    } while (i<3);
    cout << "i의 값: " << i << endl;
    return 0;
}