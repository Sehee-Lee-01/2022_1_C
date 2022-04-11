/*
Problem: 두 구간이 차지하는 길이 구하기
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
        // 베이스 배열 만들기
        int arr[100];
        for (int i=0; i<100; i++){
            arr[i] = 0;
        }

        int a,b,c,d;
        cin >> a >> b >> c >> d;
        for (int i = a-1; i < b-1; i++) arr[i] += 1;
        for (int i = c-1; i < d-1; i++) arr[i] += 1;

        //int resAnd = count 2;
        // int resOr = count 1 or 2;

        // 출력 하기
        //cout << resAnd << " " << resOr << endl;
    }
    return 0;    
}