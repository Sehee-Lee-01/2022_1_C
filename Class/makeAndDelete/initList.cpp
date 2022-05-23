#include <iostream>
using namespace std;

class Kvector{
    int *m;
public:
    Kvector(int sz = 0){
        cout << this << " : Kvector(int) called\n";
        // 동적 할당
        if(sz>0) m = new int[sz];
        else m = NULL;
    }
    // 메모리 누수 방지
    ~Kvector(){
        cout << this << " : ~Kvector() called\n";
        delete [] m;
    }
    int *getM(){
        return m;
    }
};
Kvector v2(2);
int main(){
    Kvector v1;
    cout << v1.getM() << endl;
    cout << v2.getM() << endl;
    return 0;
} 