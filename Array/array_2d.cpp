#include <iostream>
using namespace std;

int main(){
	
	int arr[2][2];
	int i,j;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++)
			arr[i][j] = 3;
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++)
			cout << arr[i][j] << " " << &arr[i][j] <<endl ;
	}
	
	
    return 0;
}