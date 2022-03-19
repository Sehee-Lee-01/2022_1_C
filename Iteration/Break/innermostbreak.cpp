#include <iostream>
using namespace std;

int main(){

    int i,j;
    for (i=0;i<3;i++){
        for (j=10;j<12;j++){
            if(i==1) break;
            cout << i << " " << j << endl;
        }
    }
    return 0;
}