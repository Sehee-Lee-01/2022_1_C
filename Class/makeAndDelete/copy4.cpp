#include <iostream>
using namespace std;

class Point 
{
    int x, y;
public:
    Point(int x=0, int y=0) : x(x)
    {
        this -> y = y;
    }
    void print()
    {
        cout << "(" << x << ", " << y << ")";
    }
};
class Circle
{
    Point center;
    int radius;
public:
    Circle(int r): center(0,0), radius(r){}
    Circle(Point p = Point(0,0), int r=0): center(p), radius(r){}
    Circle(int x, int y, int r=0): center(x,y), radius(r){}
    void print()
    {
        center.print();
        cout << " : " << radius << endl;
    }
};
int main()
{
    Point p(3,4);
    Circle c1; c1.print();
    Circle c2(2); c2.print();
    Circle c3(-1,-2); c3.print();
    Circle c4(4, 5, 1); c4.print();
    Circle c5(p,5); c5.print();
}