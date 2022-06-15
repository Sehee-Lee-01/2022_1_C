#include <iostream>
using namespace std;

class Car
{
    int speed;
    string color = "red";
public:
    Car(int s=0, string c="white"): speed(s), color(c) {}
    void display()
    {
        cout << this << " ] " << speed << ", " << color << endl;
    }
};

// void swapObjects(Car *c1, Car *c2) // 포인터
void swapObjects(Car &c1, Car &c2) // 래퍼런스
{
    Car tmp;
    tmp = c1;
    c1 = c2;
    c2 = tmp;
}

int main()
{
    Car redCar(100,"red"), blueCar(50,"blue");
    redCar.display(); blueCar.display();
    swapObjects(redCar, blueCar);
    redCar.display(); blueCar.display();
    return 0;
}