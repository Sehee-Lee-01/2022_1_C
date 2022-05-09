/* Problem: 요일 계산하기
국민대학교 산림환경시스템학과 4학년 20191987 이세희 */
#include <iostream>
using namespace std;

const int GREGORIAN = 1582;
const int yoon_year = 366;
const int not_yoon_year = 365;
const int yoon_month[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const int not_yoon_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const int day_result[] = {5,6,0,1,2,3,4};

bool is_yoon(int Y){
    if((Y%400 == 0)||((Y%4 == 0)&&(!(Y%100 ==0)))){
        return true;
    } else {
        return false;
    }
}

int main(void){
    int numTestCases;
    cin >> numTestCases;

    for(int i=0; i<numTestCases; i++){
        
        unsigned int Y, M, D;
        cin >> Y >> M >> D;

        for (int j=GREGORIAN; j<Y; j++){
            if(is_yoon(j)){
                D += yoon_year;
            } else {
                D+= not_yoon_year;
            }
        }

        if (is_yoon(Y)){
            for (int j=0; j<(M-1); j++){
                D += yoon_month[j];
            }
        } else {
            for (int j=0; j<(M-1); j++){
                D += not_yoon_month[j];
            }
        }

        cout << day_result[(D-1)%7] << endl;
    }
}