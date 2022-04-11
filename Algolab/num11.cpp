/*
Problem: 두 사각형 면적 둘레 구하기
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
            cout << endl;
        }

        for (int i=q1x-1;i<q2x-1;i++){
            for(int j=q1y-1;j<q2y-1;j++){
                box[i][j]++;
            }
            cout << endl;
        }

        int area, round;
        
        // 면적 구하기 
        // area = 1 개수 - 2 개수;

        //둘레 구하기
        // round = 1사각형들 둘레 - 2 사각형 둘레(?);

        // 출력 하기
        cout << area << " " << round << endl;
        /*
        for (int i=0;i<100;i++){
            for(int j=0;j<100;j++){
                cout << box[i][j];
            }
            cout << endl;
        }*/
    }
    return 0;    
}