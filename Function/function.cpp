#include <iostream>
using namespace std;

//함수 원형 선언: 컴파일러에게 미리 알리는 것 
int square(int n);

int main(){
    int i, result;
	for(i=0; i<5; i++){
		result = square(i); // 함수 호출 
		cout << result << endl;
	}
	return 0;
} 

// 함수 정의
int square(int n){
	return(n*n);
}