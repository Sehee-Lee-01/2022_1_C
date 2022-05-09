/* Problem: 11의 배수
국민대학교 산림환경시스템학과 4학년 20191987 이세희 */
#include <iostream>
#include <string>
using namespace std;

int main(void){
    int numTestCases;
    cin >> numTestCases;

    for(int i=0; i<numTestCases; i++){
        string data;
        cin >> data; 
        
        int data_size = data.length();
        int data_int[data_size];
        
        for (int i=0; i< data_size; i++){
            data_int[i] = data[i] - '0';
        }

        // point
        while (data_size >= 3){
            int pop = data_int[data_size-1];
            int last = data_int[data_size-2]; 
            
            if (last >= pop){
                data_int[data_size-2] = last - pop;
                data_size--;
            } else {
                data_int[data_size-2] = (last + 10) - pop; 
                data_size--;
                
                int dat = data_size-2;
                data_int[dat] -= 1; 
                while ((data_int[dat] < 0)&&(dat > 0)) {
                    data_int[dat] += 10;
                    data_int[dat-1] -= 1;
                    dat--;
                }
            }

        }
        if ((data_int[0] == data_int[1])&&(data_int[1]!=0)) {
            for (int k = 1;k<data.length();k++){
                cout << data_int[k];
            }
            cout <<endl;
        } 
        else if ((data_int[0] == 0) && (data_int[1]==0)) {
            for (int k = 2;k<data.length();k++){
                cout << data_int[k];
            }
            cout <<endl;
        }
        else cout << 0 << endl;
    }
}