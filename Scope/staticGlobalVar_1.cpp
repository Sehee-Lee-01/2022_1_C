#include <iostream>
using namespace std;

int all_files;
static int this_file;
extern void sub(); // staticGlobalVar_2.cpp

int main(){
	sub();
	cout << all_files << endl;
    return 0;
} 