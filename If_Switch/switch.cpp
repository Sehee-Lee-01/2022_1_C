#include <iostream>
using namespace std;

int main(){
    int number;

    cout << "수를 입력하시오.: ";

    cin >> number;
	
    switch (number)
    {
    case 0:
        cout << "없음\n";
        break;
			
    case 1:
        cout << "하나\n";
        break;
			
	// break 없어서 default까지 실행
    case 2:
        cout << "둘\n";
			
	// default는 생략 가능
    default:
        cout << "뭐썼니?\n";
    }
    return 0;
}