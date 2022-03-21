#include <iostream>
using namespace std;

int main(){
	int num;
	cin >> num;
	
	// 중괄호에 따라 else 가 어디에 속하는지!
	// 가장 가까운 if와 매칭이 된다.
	if(num <20)
		if(num<15)
			cout<< num <<endl;
		else
			cout << "nono"<< endl;
	else
			cout << "nonono"<< endl;
	
	
    return 0;
}