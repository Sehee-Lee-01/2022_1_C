#include <iostream>
using namespace std;

enum ANIMALS {DOG, CAT, BIRD};
enum FLOWERS {DAISY=10, ROSE, SUNFLOWER=20};

int main(){
	
	ANIMALS a;
	
	a=BIRD;
	cout << "DOG : " << DOG << endl;
	cout << "CAT : " << CAT << endl;
	cout << "a : " << a << endl;
	cout << "DAISY : " << DAISY << endl;
	cout << "ROSE : " << ROSE << endl;
	cout << "SUNFLOWER : " << SUNFLOWER << endl;
	
    return 0;
} 