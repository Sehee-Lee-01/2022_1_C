/*
Problem: 주가분석-1
국민대학교 산림환경시스템학과 4학년 20191987 이세희
*/
#include <iostream>
using namespace std;

// 배열사용 금지 

int main(void){
    // 입력 받기
    int numTestCases;
    cin >> numTestCases;

    for(int i=0; i<numTestCases; i++)
    {
        int numData, data;
        cin >> numData;
        // 이전 값 선언
        // 이후 값 선언
        // 중간 고점 값 선언(이전 < 현재, 이후 < 현재, 연속되는 것은 연속의 마지막에서)
        // 중간 고점 횟수(중간 고점 값 바뀔 때 더하기)
        for (int j=0; j<numData; j++)
        {
            cin >> data;
            // 중간 고점 정하는 알고리즘 
        }
        // 출력 하기
        cout << "result" << endl;
    }
    return 0;    
}