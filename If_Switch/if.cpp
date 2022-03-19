#include <iostream>
using namespace std;

int main(){
    int number; 
    cout << "점수 입력하십쇼.: ";
    cin << number;

    if (number >= 90) 
        cout << "잘하는군!\n";
    else if (number >= 70) {
        cout << "쫌 하네\n";
    else 
        cout << "흠.. 그래\n";
    }
    return 0;
}