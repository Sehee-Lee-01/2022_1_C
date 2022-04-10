#include <iostream>
using namespace std;

// 전역변수
// 전역변수의 초기값은 0. 지역변수와 다름!
//생존기간은 프로그램 시작부터 종료까지
int counter;
void set_counter(int i){
	counter = i; // 직접 사용 가능
}

int main(){
	cout << "counter = " << counter << endl;
	
	counter = 100; // 직접 사용 가능
	cout << "counter = " << counter << endl;
	
	set_counter(20);
	cout << "counter = " << counter << endl;
    return 0;
} 