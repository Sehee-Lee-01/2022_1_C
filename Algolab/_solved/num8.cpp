/*
Problem: 숫자의모든자리수반복곱하기
국민대학교 산림환경시스템학과 4학년 20191987 이세희
*/
#include <iostream>
#include <cstring> 

using namespace std;

int main(void){
    // 입력 받기
    int numTestCases;
    cin >> numTestCases;

    for(int i=0; i<numTestCases; i++)
    {
        char charNum[11];
        cin >> charNum;
        int numLength = strlen(charNum);
        int result=1;
        while ( numLength != 1) {  
            int numlResultInt=1;
            for (int j=0; j<numLength; j++){
                if ((int)charNum[j] - '0' == 0) continue;
                
                numlResultInt *= (int)charNum[j] - '0';
            }

            //charNum = (char)numlResultInt;
            string tmp = to_string(numlResultInt);
            strcpy(charNum, tmp.c_str());
            numLength = strlen(charNum);
            result = numlResultInt;
        }

        // 출력 하기
        cout << result << endl;
    }
    return 0;    
}