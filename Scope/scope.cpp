#include <iostream>
using namespace std;

int inc(int counter);

int main(){
	int i;
	i =10;
	cout << "함수 호출 전 i=" << i << endl;
	// 값에 의한 호출 (call by value)
	inc(i);
	cout << "함수 호출 후 i=" << i << endl;
    return 0;
}

// int counter = i
// 매개변수도 일종의 지역변수이다. 
int inc(int counter){
	counter++;
	return counter;
}