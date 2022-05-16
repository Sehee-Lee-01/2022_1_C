#include <iostream>
#include <string>
using namespace std;
class Employee {
    string name; // private
    int salary; // private
    // 직원의 월급 반환
    int getSalary(){return salary;}
public:
    int age; // public
    // 직원의 나이를 반환
    int getAge(); // 외부에서 정의
    // 직원의 이름을 반환
    string getName(){return name;} // 인라인 함수
    
    // 함수의 중복 정의
    void setName(){name = "1234";} 
    void setName(string newName){name = newName;} 
};

// 멤버 함수 외부 정의 
// 일반 함수와 동일 호출
int Employee::getAge(){
    return age;
}

int main(){
    Employee e;
    // e.salary = 300;
    string s = e.getName();
    int a = e.getAge();
}