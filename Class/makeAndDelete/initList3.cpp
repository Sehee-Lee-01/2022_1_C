// 초기화 리스트를 사용해야 하는 경우 1) 상수 멤버
#include <iostream>
using namespace std;
// NO
// class Car{
//     const int MAX_SPEED = 300; // 컴파일 오류, C++ 11 부터 허용
//     int speed;
// }

// NO
// class Car{
//     const int MAX_SPEED;
//     int speed;
// public: 
//     Car(){
//         MAX_SPEED = 300; // 컴파일 오류
//     }
// }

class Car{
    const int MAX_SPEED;
    int speed;
public: 
    Car(): MAX_SPEED(300){
    }
};

