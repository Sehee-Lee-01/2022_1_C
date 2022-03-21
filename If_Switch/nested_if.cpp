// (증요) 중첩 if &&으로 바꾸기
#include <iostream>
using namespace std;

int main(){
	int num = 10;
	
	if(num <20){
		if(num<15)
			cout<< num <<endl;
	}
	
	if (num<20 && num<15)
		cout << num << endl;
	
    return 0;
}