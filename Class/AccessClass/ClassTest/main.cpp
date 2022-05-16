// complie
// g++ -o main main.cpp car.cpp
// 클래스를 사용한다.
#include <iostream>
#include "car.h"
using namespace std;

int main(){
    Car myCar;
    myCar.setSpeed(80);
    myCar.honk();
    cout<< "현재 속도는 " << myCar.getSpeed() << endl;
    return 0;
}