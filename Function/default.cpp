#include <iostream>
using namespace std;
// 함수 원형 선언에서 디폴트 값 설정. 뒤에서부터 부여 가능
int clac_deposit(int salary = 300, int month = 12);

int main(){
    cout << clac_deposit(200, 6) << endl;
	cout << clac_deposit(200) << endl;
	cout << clac_deposit() << endl;
	return 0;
} 

int clac_deposit(int salary, int month){
	return salary*month;
}