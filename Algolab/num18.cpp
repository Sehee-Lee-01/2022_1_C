/* Problem: 오셀로(Othello) 게임
국민대학교 산림환경시스템학과 4학년 20191987 이세희 */
#include <iostream>
using namespace std;

int main(void){
    // 입력 받기
    int t;
    cin >> t;

    for(int i=0; i<t; i++)
    {
        int n, s, t, black, white;
        cin >> n;
        for (int j=0; j<n; j++)
        {
            cin >> s >> t;
        }
        // 출력 하기
        cout << black << " "<< white << endl;
    }
    return 0;    
}