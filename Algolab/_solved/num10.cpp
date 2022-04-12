/*
Problem: 정사각형출력-3
국민대학교 산림환경시스템학과 4학년 20191987 이세희
*/
#include <iostream>
using namespace std;
int main(void){
    int numTestCases;
    cin >> numTestCases;
    for(int i=0; i<numTestCases; i++)
    {
        int numData;
        cin >> numData;
        int middle = numData/2 + 1;
        for (int j=0; j<numData; j++)
        {
            for(int m=0; m<numData; m++)
            {
                if (j == middle-1 && m == middle-1){cout << '*';}
                else if ((j == 0 || j == middle-1 || j == numData-1) && (m == 0 || m == middle-1 || m == numData-1)) {cout << '+';}
                else if (j == 0 || j == middle-1 || j == numData-1){cout << '-';}
                else if (m == 0 || m == middle-1 || m == numData-1) {cout << '|';}       
                else if (j == m ) {cout << '\\';}
                else if (j == numData -1 - m ) {cout << '/';}
                else{cout << '.';}
            }
            cout << endl;
        }
    }
}