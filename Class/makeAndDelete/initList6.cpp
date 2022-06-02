// 초기화 리스트를 사용하는 경우 3) 객체 멤버
#include <iostream>
#include <utility>
using namespace std;

class Point
{
    int x,y;
public:
    Point(int x, int y): x(x){
        this -> y = y;
    }
};

class Circle{
    Point center;
    int radius;
public:
    Circle(int x, int y, int r): center(x, y), radius(r) {}
};

int main() {
    Circle cl(4,5,2);
    return 0;
}