#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	time_t t = time(NULL); // NULL하면 현재시간 반환
	cout << t << endl << "press any key: ";
	cin.ignore(); // 그냥 기다렸다가 실행시키는 용도
	cout << time(NULL) << endl; // 좀 이따가 누르면 값이 t와 값이 달라짐
    return 0;
} 