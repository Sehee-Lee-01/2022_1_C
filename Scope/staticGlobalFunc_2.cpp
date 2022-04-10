#include <iostream>
using namespace std;

// static 함수는 파일 안에서만 사용가능
static void f1() {
	cout << "f1()이 호출되었습니다.\n";
}

void f2(){
    f1(); // 간접(?) 사용
	cout << "f2()가 호출되었습니다.\n";
} 