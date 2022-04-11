/*
Problem: 정사각형출력-3
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

       // 박스 만들어서 0 채우기
        char box[numData][numData];
        int middle = numData/2 + 1;

        for (int j=0; j<numData; j++)
        {
            for(int m=0; m<numData; m++)
            {
				box[j][m] = '.';
            }
        }
		
		int top = middle-2;
		int left = middle-2;
		int bottom = middle;
		int right = middle;
		
        // 규칙따라 채우기
		for (int k=0; k < (middle/2);k++){
			for (int l = left; l<right+1;l++){
				box[top][l] ='\\';
				box[bottom][l] ='\\';
			}
			
			for (int l = top+1; l < bottom;l++){
				box[l][left] ='-';
				box[l][right] ='-';
			}
	
			top -= 2;
			left -= 2;
			bottom += 2;
			right += 2;
			
			if (top < 0) break;
		}
		
        // 출력
		for (int j=0; j<numData; j++)
        {
            for(int m=0; m<numData; m++)
            {
				cout << box[j][m];
            }
            cout << endl;
        }
    }
    return 0;
}