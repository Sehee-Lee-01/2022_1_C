/*
Problem: 주가분석-1
국민대학교 산림환경시스템학과 4학년 20191987 이세희
*/
#include <iostream>
using namespace std;

int main(void){
    int numTestCases;
    cin >> numTestCases;

    for(int i=0; i<numTestCases; i++)
    {
        unsigned int numData, prev, curr;
        // 임의로 정해지는 middlemax 주의
        unsigned int result = 0, middlemax = 0;
        cin >> numData >> prev;
        for (int j=0; j<numData-1; j++)
        {
            cin >> curr;
            if (prev < curr){middlemax = curr;}
            if ((middlemax == prev) && (prev > curr)){result++;}
            prev = curr;
        }
        cout << result << endl;
    }
}