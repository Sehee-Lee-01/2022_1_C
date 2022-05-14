// class 가 없는 C 스타일
// 절차지향
#include <iostream>
using namespace std;

// 구조 선언
struct Car {
    int speed;
    int gear;
    char* pcolor;
}; // 세미 콜론 해줘야 함

// 함수 선언
void init(Car &c, char*color);
void start(Car &c);
void stop(Car &c);
int get_speed(Car &c);
void set_speed(Car &c, int speed);

// 실행
int main(){
    Car car; // C 방식 : struct Car car;
    init(car, "red");
    start(car);
    set_speed(car, 60);
    stop(car);
    return 0;
} 