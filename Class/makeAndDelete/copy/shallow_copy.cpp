#include <iostream>
#include <cstring>
using namespace std;
#define NAME_LEN 100

class Student
{
    int id;
    char *name;
public:
    Student(int n, const char *s)
    {
        id = n;
        name = new char[NAME_LEN];
        strncpy(name, s, NAME_LEN);
        name[NAME_LEN-1] = '\0';
    }
    ~Student(){ delete [] name; }
    Student(const Student& st)
    {
        id = st.id;
        name = st.name; // shallow copy
    }

    void setName(const char *s)
    {
        strncpy(name,s,NAME_LEN);
        name[NAME_LEN-1] = '\0';
    }

    void print()
    {
        cout << this << " ] " << "name : "<< name;
        cout << " id : " << id << endl;
    }

};

int main()
{
    Student s1(20190000, "Lee"), s2(s1);
    s1.print(); s2.print();
    s2.setName("SEO");
    s1.print(); s2.print();
    return 0;
}