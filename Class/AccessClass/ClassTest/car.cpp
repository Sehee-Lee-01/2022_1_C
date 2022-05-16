// complie
// g++ -o main main.cpp car.cpp
// 클래스 구현 및 정의
#include <iostream>
#include "car.h"
using namespace std;

int Car::getSpeed(){
    return speed;
}
void Car::setSpeed(int s){
    speed=s;
}
void Car::honk(){
    cout<< "빵빵" << endl;
}