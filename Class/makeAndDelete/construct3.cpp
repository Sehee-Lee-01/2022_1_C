#include <iostream>
using namespace std;

int main(){
    Car c1; // default constructor
    Car c2(); // decalre function
    Car c3(100, 3, "white"); // call constructor
    Car c4 = Car(100, 3, "white"); // call constructor and copy to c4, same as upper
}