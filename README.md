# 2022_1_C

To study C/C++ of 1st semester

# 수업 정리
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
/*n: 생략가능
m: 생략 불가능(중괄호 안에 유추 불가해서 )
	*/
a[n][m] = {...}
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

## 2022.04.04

- 엡실론?

## 2022.04.13

- call by reference, value 구분하기(c++)
- call by address만 지원(c)
- 배열이 함수의 매개변수로 전달되는 경우는 함수 안에서 배열요소 값이 변할 수 있으니 조심.
- 포인터로 접근하는 것이 효율적이다.(배열이름 == 배열이 시작되느 주소)

## 2022.04.18

- malloc의 불편한 점을 new가 개선
- heap: 여유 메모리, **stack 메모리에 포인터로 가리켜야 쓸 수 있다.**
- new는 타입 뿐 아니라 구조체, 클래스도 가능
- 반납된 메모리를 재사용할 수 있다.
- heap 부족하면 new 할 때 리턴 값이 null이다. null 처리를 해줘야한다.
  ```cpp
  if(pointer == nullptr){
    ...
  }
    ```
- new 배열 초기화 
  ```cpp
  int *pd = new int[3]{0,1,2};
  ...
  delete[] pd;
  ```

# gdb 정리 
## **1. 기본**
  ### 1-1. gdb 실행
  ```shell
  $ gdb (실행파일 이름)

  # ---------- gdb 실행 ---------- #

  (gdb) # 여기에 명령어 입력
  ```
  - 아무 것도 안쓰고 엔터를 치면 바로 전에 사용한 명령어가 수행된다.
  ### 1-2. 'q'
  - exit gdb

  ### 1-3. 'help'
  ```shell
  # 사용법
  (gdb) help (명령어)
  ``` 
  - 명령어 사용법 알려줌

## **2. 코드 실행 관련** 
### 2-1. 'l' 
- list a cource file (10 lines)
- 끊어진 경우 이어서 보고 싶으면 다시 l(그 다음 10 줄). 
- 중간에 수행하다가 실행할 경우, 현재 수행할 라인 포함 앞 뒤 5줄 보여줌.

### 2-2. 'r' 
- run (처음부터)

### 2-3. 'b'
```shell
# 사용법
(gdb) b (num)
``` 
- set breakpoint at line (num)
- 이후 r 실행하면 num번째 줄 '시작하기 전'에 멈춤 (num번째 줄은 수행이 안됨)
- 여러 번 설정 가능
- 삭제할 때는 'del b'가 아니라 'del break'

### 2-4. 'n'
- next: execute 1 line

### 2-5. 'c'
- continue running (멈춘부분 부터)
- breakpoint가 있다면 거기서 멈추고 없다면 끝까지 수행
  - breakpoint가 for loop 안에 있을 경우 주의

### 2-6. 'bt'
- backtrace
- 현재 멈춘 라인 보여준다. 나온 라인은 아직 수행 안한 상태.

### 2-8. 's'
- step
- 명령어 n과 s 비교
   1. n 
    - 명령어 1줄
   2. s
    - 함수 안으로 들어가서 그 함수의 첫 번째 수행문에서 멈춤.
    - 함수에 어떤 파라미터가 들어가는 지 보여준다.

## **3. 데이터 확인**
### 3-1. 'p' 
- print a value of expression
``` shell
# 사용법
(gdb) p (argument)

# char arr[10]
# $n은 gdb 내부 변수
(gdb) p arr
$n = "aaaaaaaaaa"

(gdb) p arr[1]
$n = 97 'a'

(gdb) p &arr[1]
$n = 0x(임의 주소) "aaaaaaaaa"

# a[10]은 없지만 주소는 계산 가능하다.
(gdb) p &arr[10]
$n = 0x(임의 주소) ""

# a[-1]은 없지만 주소는 계산 가능하다.
(gdb) p &arr[-1]
$n = 0x(임의 주소) "Uaaaaaaaaaa"
```

### 3-2. 'x'
```shell
# 사용법
(gdb) x(/FMT) (MemAddr)
``` 
- 해당 주소 메모리 내용을 보여준다('Default = 1xw' : 16진수 1 word로 보여줌)
- FMT 생략 가능(생략할 경우 디폴트 값이나 바로 이전에 썼던 형식으로 출력)
  - FMT의 구성
    1. repeat count
      - Default : 1
    2. format letter
      - x(hex), t(binary)...
      - 띄어쓰기 단위(메모리 저장 방향에 따라 거꾸로 보일 수도 있다.)
    3. size letter
      - b(byte), w(word)...
- 메모리 주소는 gdb 자체 변수도 사용 가능.

### 3-3. 'info' 
```shell
# 사용법

# 로컬변수 알아볼 때
(gdb) info locals
``` 

### 3-4. 'disp'
```shell
# 사용법
# gdb 수행할때 (??) 값을 계속 추적하라 
(gdb) disp (??)
``` 