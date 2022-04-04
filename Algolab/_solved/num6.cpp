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

        for (int j=0; j<numData; j++)
        {
            for(int m=0; m<numData; m++)
            {
				box[j][m] = 0;
            }
        }
		
		int top = middle-2;
		int left = middle-2;
		int bottom = middle;
		int right = middle;
		
		for (int k=0; k < (middle/2);k++){
			for (int l = left; l<right+1;l++){
				box[top][l] =1;
				box[bottom][l] =1;
			}
			
			for (int l = top+1; l < bottom;l++){
				box[l][left] =1;
				box[l][right] =1;
			}
	
			top -= 2;
			left -= 2;
			bottom += 2;
			right += 2;
			
			if (top < 0) break;
		}
		
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