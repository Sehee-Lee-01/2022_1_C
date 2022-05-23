/* Problem: 홀수 마방진
국민대학교 산림환경시스템학과 4학년 20191987 이세희 */
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
        int mat[numData][numData];
        for (int j=0;j<numData;j++){
            for(int k=0;k<numData;k++){
                mat[j][k] = 0;
            }
        }
        int col=numData/2, row=0;
        for (int data=1; data<=numData*numData; data++){
            mat[row][col] = data;
            int next_col = col+1, next_row=row-1;
            // 1
                // row: 위로 한 칸 만약 위가 없다면 맨끝
                // col: 오른쪽로 한 칸 만약 위가 없다면 맨왼쪽
            if(next_row < 0) next_row += numData;
            if(next_col > numData-1) next_col-=numData;
            // 2
                // 만약 "" 가 아닐 경우 바로 아래칸
            if(mat[next_row][next_col]!=0){
                next_col = col;
                next_row = row +1;
            }
            col = next_col;
            row = next_row;
        }

        for (int j=0;j<numData;j++){
            for(int k=0;k<numData;k++){
                cout << mat[j][k] << " ";
            }
            cout <<endl;
        }
    }
}
