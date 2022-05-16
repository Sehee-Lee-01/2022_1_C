/* Problem: 행렬(Matrix) 곱셈
국민대학교 산림환경시스템학과 4학년 20191987 이세희 */
#include <iostream>
using namespace std;

int main(void){
    int numTestCases;
    cin >> numTestCases;

    for(int i=0; i<numTestCases; i++)
    {
        int a, b, c, element = 0; 
        cin >> a >> b >> c;
        int input_mat1[a][b]; 
        int input_mat2[b][c];

        for (int j=0;j<a;j++){
            for(int k=0;k<b;k++){
                cin >> element;
                input_mat1[j][k] = element;
            }
        }    

        for (int j=0;j<b;j++){
            for(int k=0;k<c;k++){
                cin >> element;
                input_mat2[j][k] = element;
            }
        }

        element = 0;
        
        // 어차피 곱해서 나올거면 b로 한거번에 for
        for (int l=0;l<a;l++){
            for (int j=0; j<c; j++){
                for (int k=0; k<b;k++){
                    element += input_mat1[l][k]*input_mat2[k][j];
                }
            // 출력
            cout << element<< " ";
            //새 원소 받을 준비
            element = 0;                
            }
            cout << endl; 
        }
    }
    return 0;    
}