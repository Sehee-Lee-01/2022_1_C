/*
Problem: 두 사각형 면적 둘레 구하기
국민대학교 산림환경시스템학과 4학년 20191987 이세희
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main(void){
    int numTestCases;
    cin >> numTestCases;

    for(int i=0; i<numTestCases; i++)
    {   
        int box[101][101];
        for (int i=0;i<101;i++){
            for(int j=0;j<101;j++){
                box[i][j] = 0;
            }
        }
        int p1x, p1y, p2x, p2y, q1x, q1y, q2x, q2y;
        cin >> p1x >> p1y >> p2x >> p2y >> q1x >> q1y >> q2x >> q2y;
        for (int i=p1x;i<p2x;i++){
            for(int j=p1y;j<p2y;j++){
                box[i][j]++;
            }
        }
        for (int i=q1x;i<q2x;i++){
            for(int j=q1y;j<q2y;j++){
                box[i][j]++;
            }
        }
        
        int area1=0, area2=0;

        for (int i=0;i<101;i++){
            for(int j=0;j<101;j++){
                if (box[i][j] == 1) {
                    area1++;
                } else if (box[i][j] == 2) {
                area2++;
                }
            }
        }
        int totalArea = area1 +  area2;

        //둘레 구하기: 두 사각형 둘레 - 겹치는 사각형 둘레
        int column[101], row[101];
        for (int i=0; i<101; i++){
            column[i] = 0;
            row[i] = 0;
        }

        for (int i = p1x; i < p2x; i++) column[i] ++;
        for (int i = q1x; i < q2x; i++) column[i] ++;

        for (int i = p1y; i < p2y; i++) row[i] ++;
        for (int i = q1y; i < q2y; i++) row[i] ++;
        
        int colResOr = count_if(column, column+101, [](int i){ return i != 0; });
        int colResAnd = count_if(column, column+101, [](int i){ return i == 2 ; });

        int rowResOr = count_if(row, row+101, [](int i){ return i != 0; });
        int rowResAnd = count_if(row, row+101, [](int i){ return i == 2 ; });

        int totalRound = 2*(colResOr+rowResOr);
        if (area2 == 0) totalRound += 2*(colResAnd+rowResAnd);

        // 출력 하기
        cout << totalArea << " " << totalRound << endl;
        
    }
    return 0;    
}

/*
음수가 아니면 0도 포함되는데 받은 좌표값 당연히 1부터 시작할 줄 알고 삽질.
그리고 꼭 2차원 배열 안만들어도 두 구간 길이 그대로 해서도 더 짧게 할 수 있다.
어떻게 하나면 x[100], y[100] 놓고 x좌표 따로 y좌표 다로 해서 두 사각형 겹치는 쪽 2, 안겹치는 쪽 1, 나머지 0으로 하면 

[1] x
1. x 겹침(2) 
2. x 안겹침(1)
[2] y
1. y 겹침(2)
2. y 안겹침(1)

이렇게 나온다 사각형은 안겹침, 겹침 중 하나인데 잘생각해보면 
두 사각형이 겹치게 되면 x 겹침,y 겹침 개수가 둘 다 0이 아니다.
하지만 안 겹치면 x 겹침이나 y 겹침 둘 중 하나가 반드시 0이 나온다.(멀리 떨어져 있으면 둘 다 0.)

이걸로 판단해서 해도 괜찮았을듯.

-삽질 기록 끝-
*/