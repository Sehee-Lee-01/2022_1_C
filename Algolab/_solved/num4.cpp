/*
Problem: 끝자리 숫자 계산하기
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
        
		int data;
		int result = 1;
		
        cin >> numData;

        for (int j=0; j<numData; j++)
        {
            cin >> data;
			data = data%10;
			
			if (result != 0){
				result = (result*data)%10;	
			} else {
				continue;
			}
        }
        // 출력 하기
        cout << result << endl;
    }
}