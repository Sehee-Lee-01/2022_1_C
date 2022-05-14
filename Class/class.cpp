// 객체지향
#include <iostream>
using namespace std;

// class 선언 
class Car {
    public:
    // 멤버 변수 선언
    int speed;
    int gear;
    char* pcolor;
    // class 타입도 멤버 변수가 될 수 있다.
    
    // 멤버 함수 선언
    void init(char*color);
    void start();
    void stop();
    int get_speed();
    void set_speed(int speed);
}; // 세미콜론 필수

int main(){
    Car car; // 인스턴스 생성
    
    // 객체도 pointer. reference 사용 가능하다.
    Car*pCar = &car; // Car*pCar; pCar = &car; 
    car.speed = 100;
    pCar -> speed = 120; // (*pCar).speed = 120;
    pCar->get_speed();

    car.init("red");
    car.start();
    car.set_speed(60);
    car.stop();
    return 0;
} 