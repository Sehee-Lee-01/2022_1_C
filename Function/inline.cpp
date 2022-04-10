#include <iostream>
using namespace std;

int main(){
	int result = square(10);
    return 0;
} 

inline int square(int i){
	return i*i;
}

/* 아래와 같다

int main(){
	int result = 10*10;
    return 0;
} 

*/