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
        int numData, data;
        int sum = 0;

        cin >> numData;

        for (int j=0; j<numData; j++)
        {
            cin >> data;
            sum += data;
        }
        // 출력 하기
        cout << sum << endl;
    }
    return 0;    
}