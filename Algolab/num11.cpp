/*
Problem: 두 사각형 면적 둘레 구하기
국민대학교 산림환경시스템학과 4학년 20191987 이세희
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main(void){
    // 입력 받기
    int numTestCases;
    cin >> numTestCases;

    for(int i=0; i<numTestCases; i++)
    {   
        // 베이스 2차원 공간 만들기 
        int box[100][100];
        for (int i=0;i<100;i++){
            for(int j=0;j<100;j++){
                box[i][j] = 0;
            }
        }
        // 사각형 1
        int p1x, p1y, p2x, p2y;
        cin >> p1x >> p1y >> p2x >> p2y;

        // 사각형 2
        int q1x, q1y, q2x, q2y;
        cin >> q1x >> q1y >> q2x >> q2y;
        
        // 공간에 할당
        for (int i=p1x-1;i<p2x-1;i++){
            for(int j=p1y-1;j<p2y-1;j++){
                box[i][j]++;
            }
        }

        for (int i=q1x-1;i<q2x-1;i++){
            for(int j=q1y-1;j<q2y-1;j++){
                box[i][j]++;
            }
        }
        
        // 면적 구하기 
        int area = count_if(&box[0][0], &box[99][99], [](int i){ return i != 0; });
        int area2 = count_if(&box[0][0], &box[99][99], [](int i){ return i == 2; });

        //둘레 구하기
        int column[100], row[100];

        for (int i=0; i<100; i++){
            column[i] = 0;
            row[i] = 0;
        }

        for (int i = p1x-1; i < p2x-1; i++) column[i] ++;
        for (int i = q1x-1; i < q2x-1; i++) column[i] ++;

        for (int i = p1y-1; i < p2y-1; i++) row[i] ++;
        for (int i = q1y-1; i < q2y-1; i++) row[i] ++;
        
        int colResOr = count_if(column, column+100, [](int i){ return i != 0; });
        int colResAnd = count_if(column, column+100, [](int i){ return i == 2 ; });

        int rowResOr = count_if(row, row+100, [](int i){ return i != 0; });
        int rowResAnd = count_if(row, row+100, [](int i){ return i == 2 ; });

        int round = 2*(colResOr + rowResOr);
        if (area2 == 0){
            round += 2*(colResAnd + rowResAnd);
        }

        // 출력 하기
        cout << area << " " << round << endl;
    }
    return 0;    
}