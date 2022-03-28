/*
Problem: 주어진 정수의 최대, 최소 구하기
국민대학교 산림환경시스템학과 4학년 20191987 이세희
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    // 입력 받기
    int numTestCases;
    cin >> numTestCases;

    int numlist[100];

    for(int i=0; i<numTestCases; i++)
    {
        int numData;
        cin >> numData;

        for (int j=0; j<numData; j++)
        {
            cin >> numlist[j];
        }
        // 출력 하기
        cout << *max_element(numlist, numlist+numData) << " ";
        cout << *min_element(numlist, numlist+numData) << endl;

    }
    return 0;    
}