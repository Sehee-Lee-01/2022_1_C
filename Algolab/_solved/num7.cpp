/*
Problem: 숫자정사각형달팽이모양출력하기
국민대학교 산림환경시스템학과 4학년 20191987 이세희
*/
#include <iostream>
using namespace std;

int main(void){
    int numTestCases;
    cin >> numTestCases;

    for(int i=0; i<numTestCases; i++)
    {
        int numData, a, b;
        cin >> numData;
        cin >> a >> b;

        int mat[numData][numData];
        int snail[numData*numData];

        int num = 1;
        for (int j =0; j<numData; j++) {
            for (int k =0; k<numData; k++){
                mat[j][k] = num;
                num++;
            }
        }

//달팽이 시작*

        int top = 0;
        int left = 0;
        int bottom = numData -1; 
        int right = numData -1;
        int j = 0;
        
        for (int q=0; q< numData/2+1; q++){
            for(int k = left; k < right+1; k++)
            {
                snail[j] = mat[top][k];
                j++;
            }
            
            for(int l= top+1; l< bottom+1; l++) 
            {
                snail[j] = mat[l][right];
                j++;
            }
            
            for(int m=right-1; m> left-1; m--) 
            {
                snail[j] = mat[bottom][m];
                j++;
            }
            
            for(int n=bottom-1; n > top; n--)
            {
                snail[j] = mat[n][left];
                j++;
            }
            
            top ++; left ++; bottom --; right --;
        }
        
        for (int o = a-1; o < b; o++){
            cout << snail[o] << " ";
        }
        cout << endl;
    }
    return 0;    
}