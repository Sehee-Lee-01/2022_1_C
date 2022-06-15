#include <iostream>
#include <ostream>
#include <valarray>
using namespace std;

class Kvector
{
protected:
    int *m;
    int len;
public:
    Kvector(int sz = 0, int value =0): len(sz) 
    { 
        cout << this << " : Kvector (" << sz << ", " << value << ")\n";
    }
    Kvector(const Kvector& v) 
    {
        cout << this << " : Kvector(* " << &v << ")\n";
        len = v.len;
        if(!len){m = NULL; return;}
    }
    ~Kvector() { }
    void print() const { }
    void clear() { delete [] m; m =NULL; len=0; }
    int size() { return len; }
Kvector& operator=(const Kvector& v);
friend bool operator==(const Kvector& v, const Kvector& w);
friend bool operator!=(const Kvector& v, const Kvector& w);
int& operator[](int idx) const {return m[idx];}
const int& operator[] (int idx) const {return m[idx];}
friend ostream& operator<<(ostream& os, const Kvector& v);
};
Kvector& Kvector::operator=(const Kvector &v){}
bool operator==(const Kvector& v, const Kvector& w) {}
bool operator!=(const Kvector& v, const Kvector& w) {}
ostream& operator<<(ostream& os, const Kvector& v) {}

# define N 3
class Avector : public Kvector
{
    char table[N];
public: 
    Avector(int sz=0, int v=0, const char *t="abc"): Kvector(sz, v) {}
    void setTable(const char *t) {}
friend ostream& operator<<(ostream& os, const Avector& v) {}
}

int main(int argc, char *argv[]
{
    
}
