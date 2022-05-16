// complie
// g++ -o main main.cpp car.cpp
// 클래스 선언, 클래스 인터페이스
class Car {
    public:
        int getSpeed();
        void setSpeed(int s);
        void honk();
    private:
        int speed;
};