/*
Problem: 시침과 분침 사이의 각 구하기
국민대학교 산림환경시스템학과 4학년 20191987 이세희
*/
#include <iostream>
using namespace std;
 
int angleClock(int h, int m); 
 
int main(void) 
{ 
int t; 
int h, m; 
 
    cin >> t; 
 
    for(int i=0; i<t; i++) 
{ 
        cin >> h >> m; 
        cout << angleClock( h, m ) << endl; 
    } 
 
    return 0; 
} 

int angleClock(int h, int m) 
{ 

float hour_angle_per_minute = (30/60.0)*m;
float hour_angle = 30*h;
float location_hour_from_zero = hour_angle_per_minute + hour_angle;

float minute_angle = 6*m;

float angle = abs(location_hour_from_zero - minute_angle);

float realAngle;

if (angle > 180) {
    realAngle = 360 - angle;
} else{
    realAngle = angle;
}

return realAngle;
 
}