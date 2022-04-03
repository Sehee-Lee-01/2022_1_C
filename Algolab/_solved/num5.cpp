/*
Problem: 자리수거듭제곱수
국민대학교 산림환경시스템학과 4학년 20191987 이세희
*/
#include <iostream>
#include <cmath>
#include <cstring> 
#include <stdlib.h>

using namespace std;

int main(void){
    // 입력 받기
    int numTestCases;
    cin >> numTestCases;

    for(int i=0; i<numTestCases; i++)
    {
        char numData[11];
        unsigned int sum = 0;

        cin >> numData;
        int length_n = strlen(numData);

        for (int i=0; i< length_n; i++)
        {   
            int  num = numData[i] - '0';
            sum += pow(num, length_n);
        }

        int result; 

        if (sum == atoi(numData)) {
            result = 1;
        } else {
            result = 0;
        }

        // 출력 하기
        
        cout << result << endl;
    }
    return 0;    
}