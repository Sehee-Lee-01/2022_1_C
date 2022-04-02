# 2022_1_C

To study C/C++ of 1st semester

## 2022.03.14

- C/C++ 차이점
  - 키워드
  - string 타입의 유무

## 2022.03.16

- ==과 =은 다르다.
- 줄바꿈 안해도 괜찮습니당.  “;”표시로 구분함.
- 배열 : ‘동일한 타입’, 인덱스는 0부터 시작
- 선언문과 실행문 구분

```c++
int a[10];// 선언문
a[10] = 0 // 실행문, logical error
```

- 선언시 생략 가능한 것

```c++
a[n][m] = {...}
/*n: 생략가능
m: 생략 불가능(중괄호 안에 유추 불가해서 )
	*/
```

## 2022.03.21

- int 4byte라서 주소가 4byte씩 증가
- 주소는 터미널에 16진수로 나온다.
- If와 Switch 서로 대체가 가능한가

## 2022.03.23

- 반복문
  - while
  - do_while: 무조건 한 번은 실행
    ※ do_while과 while 서로 바꾸는 연습 필요
  - for: i<10인 경우 총 11번 조건문 실행, 출력은 10번 실행
- 'return 0;' 은 관습적인 코드
- '6-2' gdb 복습하기

## 2022.03.28

- void
- gdb 영상 확인
- //char는 아스키, 유니코드 사용할 수 있는 것이 구분되어 있다.
- //각 플랫폼마다 타입의 크기가 다르다는데 이 부분을 놓침... 다시보기!
- //peritty bit(아스키 코드)
- 0,\0,NULL은 같다.
- 공백문자와 null 문자 多르다
- signed char는 character가 아니라 숫자로 해석된다.
- 부동소수점은 모두가 부호가 있는 숫자이다.
- 롱 더블은 접미사를 통해 크기를 명시적으로 나타낸다(L). 계산은 정확하지 않다.

## 2022.03.30

- 포인터를 선언하기 전 포인터가 가리키는 변수를 선언해줘야 함
- 어떻게 변환되는지 
- 