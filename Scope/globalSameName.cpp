#include <iostream>
using namespace std;

int sum = 1; // 전역변수 

int main(){
    int i =0;
	int sum = 0; // 지역변수. 지역변수가 전역변수를 가린다.
	
	for (i =0; i <= 10; i++){
		sum += i;
	}
	
	cout << "sum = " << sum << endl; // 지역변수가 전역변수를 가린다.
	
	return 0;
} 