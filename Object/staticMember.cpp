#include <iostream>
#include <string>
#include <sys/types.h>
using namespace std;

class Car
{
    string color;
    int serial;
public:
    int speed;
    static int numberOfCars;
    Car(int s=0, string c="while"): speed(s), color(c)
    {
        serial = ++numberOfCars;
    }
    static int getNumberOfCars(){ return numberOfCars; }
    void display()
    {
        cout << this << " ] " << serial << ", ";
        cout << speed << ", " << color << endl;
    }
};
int Car::numberOfCars = 0;

int main()
{
    Car carArray[2] = 
    {
        Car(100, "red"), Car(50, "blue")
    };
    for (int i=0;i<2;i++)
        carArray[i].display();
    cout << "sixeof(Car)" << sizeof(Car) << endl;
    Car *ptr = new Car[3];
    ptr -> display();
    (ptr+1) -> display();
    *ptr = carArray[0];
    ptr -> display();
    cout << "Number of Car is " << Car::getNumberOfCars() << endl;
    cout << "Number of Car is " << carArray[2].getNumberOfCars() << endl;
    cout << "Number of Car is " << ptr->getNumberOfCars() << endl;
}