/*
Problem: 숫자정사각형출력하기-1
국민대학교 산림환경시스템학과 4학년 20191987 이세희
*/
#include <iostream>
using namespace std;

int main(void){
    // 입력 받기
    int numTestCases;
    cin >> numTestCases;

    for(int i=0; i<numTestCases; i++)
    {
        int numData;
        cin >> numData;
       
        int box[numData][numData];
        int middle = numData/2 + 1;

        for (int j=0; j<middle; j++)
        {
            for(int m=0; m<middle; m++)
            {
                    box[j][m] = 0;
                cout << box[j][m];
            }
            cout << endl;
        }
    }
    return 0;
}