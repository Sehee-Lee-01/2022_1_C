/* Problem: 변수 이름
국민대학교 산림환경시스템학과 4학년 20191987 이세희 */
#include <iostream>
#include <string>
using namespace std;

int main(void){
    int numTestCases;
    cin >> numTestCases;

    for(int i=0; i<numTestCases; i++)
    {
        string data;
        int result = 1; // 다 통과하면 문제 없는거
        cin >> data;
        int front_text = data.front();
        if (!( (65 <= front_text && front_text <= 90)||(97 <= front_text && front_text <= 122)||(front_text == 95) )){
            result = 0;
        } else {
            int data_text;
            for(int i=0; i<data.length(); i++){
                data_text = data[i];
                if (!( (48 <= data_text && data_text <= 57)||(65 <= data_text && data_text <= 90)||(97 <= data_text && data_text <= 122)||(data_text == 95) )) {
                    result = 0;
                    break;
                }
            }
        }
        cout << result << endl;
    }
    return 0;    
}