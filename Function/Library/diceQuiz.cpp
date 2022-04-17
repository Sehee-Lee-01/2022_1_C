#include <iostream>
#include <cstdlib>
using namespace std;

// 1. 어떻게하면 주사위를 매번 다르게 출력할 수 있을까?
// Hint: rand(), srand(), time()

// 2. cla를 사용하여 n의 값이 같으면 같은 sequence를 반복하도록 주사위 프로그램을 고쳐라
int main(){
	for(int i = 0; i<10; i++){
		int dice = rand()%6 + 1;
		cout << dice << " ";
	}
	cout << endl;
} 