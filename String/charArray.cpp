// C 스타일! C에는 string 개념이 엄성용
#include <iostream>
using namespace std;

// *str 값 바꾸지 않고 읽기만 한다.
// 길이가 얼마나 되는지 알아보려는 함수(맨뒤 null값 제외) 
int my_strlen(const char *str){
    int i;
    for(i=0;*str != '\0'; i++, str++);
    return i;
}

// 초기화 함수
char *my_strcpy(char *d, const char *s){
    char *r = d;
    for (; *s; s++) *r++ = *s; // *(r++) = *s;와 비슷하다.
    *r = '\0'; // 뒷 자리는 null로 마무리 
    return d; // d는 배열의 맨 앞자리. 걍 아까 그 배열 리턴 하겟다는 뜻. 
}

// append 
char *my_strcat(char *d, const char *s){
    char *r=d;
    for(;*d;d++); // 포인터를 배열 맨 뒤로 일단 보냄.
    for(;*s;s++) *d++ = *s;
    *d = '\0';
    return r; // d나 r이나 복사해서 둘 중하나 증가 안한 거 리턴하는 함수.
}


int main(){
    char s1[10], s2[10] = "xxx";
    // s1 = "12";
    my_strcpy(s1, "12");
    cout << "length of " << s1 << " is " << my_strlen(s1) << endl;
    // s2 = s1 + "ab";
    my_strcpy(s2, s1);
    my_strcat(s2, "ab");
    cout << "length of " << s2 << " is " << my_strlen(s2) << endl;
    cout << "length of " << s2 << " is " << my_strlen(s2) << endl;

} 