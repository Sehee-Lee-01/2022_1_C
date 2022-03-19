#include <iostream>
using namespace std;

int main(){

    int i,j;
    bool terminate = false;

    for (i=0;i<5;i++){
        for (j=0;j<3;j++){
            if(i==1){
                terminate = true;
                break;
            }
            cout << i << " " << j << endl;
        }
        if (terminate) break;
    }
    return 0;
}