/* Problem: 11의 배수
국민대학교 산림환경시스템학과 4학년 20191987 이세희 */
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
        
        while (data.length() == 2){
            pop_last = data.back();
            data.pop_back();
            result.insert(0, pop_last);
            //  data = data - pop_last

        }
        if (data == "0") cout << result << endl;
        else cout << 0 << endl;
    }
    return 0;    
}