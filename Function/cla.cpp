#include <iostream>
#include <cstdlib>
using namespace std;

void print_arg(char *p){
	for(int i =0; p[i] != '\0'; i++){
		cout << p[i];
	}
	cout << endl;
}

int main(int argc, char *argv[]){
	if (argc != 2){
		cout << "usage: ./args n\n";
		return -1;
	}
	// ./args
	cout << "argv[0] is " << argv[0] << endl;
	cout << "argv[0] is " << (void *)argv[0] << endl;
	print_arg(argv[0]);
	// 250
	cout << "argv[1] is " << argv[1] << endl;
	cout << "argv[1] is " << (void *)argv[1] << endl;
	print_arg(argv[1]);
	// atoi
	int n = atoi(argv[1]);
	cout << "n is " << n << endl;
	// 비교
	cout << "sizeof(argv[1]) is " << sizeof(argv[1]) << endl; // 마지막 '\0' 포함
	cout << "sizeof(n) is " << sizeof(n) << endl;
} 