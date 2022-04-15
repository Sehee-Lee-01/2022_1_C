#include <iostream>
using namespace std;
int inc(int counter);
int main(){
    int i;
    i = 10;
    cout << "함수 호출 전 i = " << i << endl;
    inc(i); // call by value
    cout << "함수 호출 후 i = " << i << endl;
    return 0;
} 
// 매개변수도 일종의 지역변수
int inc(int counter){
    counter++;
    return counter;
}