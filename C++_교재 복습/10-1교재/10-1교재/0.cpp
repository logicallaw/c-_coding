/*
새로운 개념
1.문자열 상수 기본 개념
개행문자는 '\n'이고, 문자열의 끝을 표시하는 널문자 '\0'.
문자열의 개행문자는 문자로 인식하고, 널문자는 문자로 인식하지 않는다.
따라서, 널문자 이후의 문자는 출력되지 않는다!
2.char* 포인터
참조 대상이 const이면 포인터도 const여야만 한다!

char* p0 = name; //은 가능!
char* p1 = "junho"; //은 에러! 참조 대상이 상수라서 앞에 const 붙여야함.
const char* p2 = "junho"; //가능!

3.strlen() 전역함수(cstring include)
:C-style char배열 문자열의 길이를 리턴.
strlen(char[]);
4.length() 멤버함수(string include)
:c++-style string객체 문자열 길이 리턴.
객체.length()
5.int 배열 포인터와 char 배열 포인터 출력의 차이
int배열 포인터는 그냥 출력시 포인터가 가리키는 변수의 주소를 출력함.
char배열 포인터는 그냥 출력시 포인터가 가리키는 변수의 값을 출력함.
그래서, char배열 포인터의 자체 주소 출력 원한다면 &를 붙여야함.
char배열 포인터의 자체 공간도 존재한다는 것도 기억하자.
6.getline()
char전용 getline: cin.getline(char[], char크기, 구분자) (string은 올 수 없다.) (include X)
string전용 getline: getline(cin, string, 구분자) (include <string> 해야함.)  (includeO/string)
각 타입에 맞는 getlien을 사용해야함.
안그러면 에러 발생한다.
7.strcpy(char* destination, const char* source); (include X/cstring)
지금은 strcpy보다는 strcpy_s를 사용한다.

목적 배열에 소스 배열을 복사가능하다.
이때, 이어붙이는게 아니라, 아에 전체를 바꿔버린다.

8.strncpy(char* destination, const char* source, size_t num) (include X/cstring)
or strncpy_s()
strncpy의 기본 동작은 strcpy와 같은데,
세번째 인수로 source의 복사 길이를 지정한다.
그렇게 되면, destination의 나머지 문자는 쓰레기값이 돼서
마지막에 널문자를 대입해 출력을 조정해야한다.

9.strcpy_s(char* destination, size_t buffer_size, const char* source) (include X/cstring)
목적지 배열에 목적지 배열 크기만큼 소스배열을 완전히 복사한다는 의미이다.
이때, 버퍼 사이즈가 소스 배열 크기를 담지 못하면 에러가 발생한다.
완전히 복사해야하는데, 버퍼 사이즈가 작으면 에러가 발생한다는 것이다.

10.strcmp(const char* str1, const char* str2, size) (include X/cstring)
str1와 str2의 문자열을 비교해
완전 동일하면 0을 리턴,
str1이 str2보다 알파벳을 처음부터 비교해서 사전적으로 작으면 -1을 리턴,
반대면 1을 리턴한다.
size는 두 문자열의 길이를 지정해, 해당 길이만 사전적으로 비교한다.

11.strcat(char* destination, const char* source); (includeX/iostream)
목적 배열뒤에 소스 배열을 이어 붙인다.
strcat_s(목적배열,목적 배열 크기, 소스배열);

12.char* 포인터 배열이면,
각 배열 요소는 동적할당된 배열이어야한다.

13.strcpy(목적, 소스)-->기본적으로 전체 복붙이다. 목적배열 문자열이 사라진다.

strcpy_s(목적, 목적크기, 소스)-->안전성 추가하여 복붙한다. 버퍼크기가 소스 담지 못하면 에러 발생한다.
이때, 목적보다 소스 크기가 크면 오류난다.

strncpy(목적, 소스, 소스 크기 지정)-->지정된 크기의 소스만 목적에 복붙한다.

strcpy_s(목적, )
strcmp() 사전적 확인하여 완전 동일하면0, 크면 1, 작으면 -1 리턴한다.
strcat(목적, 소스) 목적 뒤에 소스 이어붙인다.
strncat(목적, 소스, 소스크기) 소스 크기만 목적 뒤에 이어붙인다.

strcat_s 안전성 추가
strncat_s 안전성 추가
*/

/*
다시볼 문제
10-4.cpp : 종합적인 개념이 사용되어 어려웠음.
*/