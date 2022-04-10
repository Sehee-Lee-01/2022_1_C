#include <iostream>
#include <cstdlib>
using namespace std;

//seed 값이 다르면 random sequence가 달라짐
// 같으면 반복.
int main(){
	int i = 0;
	cout << "no random seed given \n";
	cout << i << ": " << rand() << endl; i++;
	cout << i << ": " << rand() << endl; i++;
	
	srand(100);
	cout << i << ": " << rand() << endl; i++;
	cout << i << ": " << rand() << endl; i++;
	
	srand(50);
	cout << i << ": " << rand() << endl; i++;
	cout << i << ": " << rand() << endl; i++;
	
	srand(100);
	cout << i << ": " << rand() << endl; i++;
	cout << i << ": " << rand() << endl; i++;
	
    return 0;
} 