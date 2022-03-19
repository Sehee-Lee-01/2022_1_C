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
			
    case 2:
        cout << "둘\n";
        break;
			
    default:
        cout << "뭐썼니?\n";
        break;
    }
    return 0;
}