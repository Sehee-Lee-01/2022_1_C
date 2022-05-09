/* Problem: 11의 배수
국민대학교 산림환경시스템학과 4학년 20191987 이세희 */
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(void){
    int numTestCases;
    cin >> numTestCases;

    for(int i=0; i<numTestCases; i++)
    {
        string data, result = "";
        string pop_last;
        cin >> data; 
        
        while (data.length() >= 2){
            
            pop_last = data.substr(-1,1);
            data.pop_back();
            result.insert(0, pop_last);
            // 전제: data = data - pop_last
            // 마지막 자리 숫자 < 뗀 숫자이면 
            int data_last_int = stoi(data.substr(-1,1));
            int pop_last_int = stoi(pop_last);
            if (data_last_int > pop_last_int){
                data.replace(-1, to_string(data_last_int - pop_last_int));
            }
            // while (그전 < 1)까지 
            // 그전 + 10 -1

            // 자리 수 줄어들면 마무리
            if (data.substr(0,1) == "0"){
                data.erase(0);
            }

        }
        if (data == "0") cout << result << endl;
        else cout << 0 << endl;
    }
    return 0;    
}

