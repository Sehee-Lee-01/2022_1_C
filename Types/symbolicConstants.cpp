#include <iostream>
using namespace std;

int main(){
	const int TAX_RATE = 0.15;// 기호 상수 선언
	double salary, income, expenditure;
	
	income = salary-TAX_RATE*salary;
	expenditure += TAX_RATE*salary;
	
	TAX_RATE = 0.20;//컴파일 에러
    return 0;
} 