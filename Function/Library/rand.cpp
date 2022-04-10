#include <iostream> // for 입출력
#include <clistdlib> // for rand 함수
using namespace std;

// 0에서 RAND_MAX까지 n개의 난수 출력
// 앞에서 선언하는 경우 프로토타입 작성 안해도 됨
void get_random(int n){
	int i;
	for (i = 0; i < n; i++){
		cout << rnad() << endl;
	}
}

int main(){
	get_random(10);
	cout << endl << "RAND_MAX is " << RAND_MAX << endl;
    return 0;
}  