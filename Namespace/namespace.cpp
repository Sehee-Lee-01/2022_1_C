#include <iostream>
using namespace std;
int mode; // 전역변수

namespace Graphics
{
    int mode;
    int x,y;
    void draw() { cout << "Graphics 이름 공간 안의 draw()" << endl; }
    void message() { cout << "Graphics 이름 공간 안의 message()" << endl; }
}

namespace Network
{
    int mode, speed;
    void send(char *){ cout << "Network 이름 공간 안의 send()" << endl; }
    void message() { cout << "Network 이름 공간 안의 message" << endl; }
}

int main()
{
    // x = y = 100;
    // speed = 22900;
    // draw();

    mode = 1; 
    Graphics::mode = 1;
    Network::mode = 2;

    Graphics::message();
    Network::message();
    return 0;
}