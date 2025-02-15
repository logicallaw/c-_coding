/*
<개념정리>
1.numeric_limits<자료형>::멤버함수
2.기본 출력은 10진수/8진수 oct, 16진수 hex 조정자 존재(기본 스트림)
2-1.showbase조정자는 각각 진법을 출력해 앞에 0 또는 0x까지 출력/showpos조정자 10진수 양의 부호/noshowbase 양의부호 출력안함

#iomanip 꼭 include해야됨!!
3.setw(칸수)/internal 조정자:왼쪽에 부호와 진법, 오른쪽 수/left 왼쪽 정렬, right(디폴트) 오른쪽 정렬
3-1.setfill(' '):디폴트는 ' '공백문자임.
4.정수/정수-->무조건 정수라서 소수 원한다면 왼쪽녀석을 double형 변환해야됨!!!
5.나머지 연산자는 무조건 정수%정수여만 가능. 정수 자료형만 나머지 연산 가능하다!!!
6.switch case 정수값은 ""아니라 ''임!!(캐릭터 타입만 가능)!!!!!!
7.fixed 괄호없다!!!
7-1.fixed:기본출력은 유효숫자 6개와 지수표기법인데 fixed 조정자 사용하면 기본 소수점이하 6자리는 무조건 출력됨!!!!!!!!!
7-2.setprecision(자리수)-iomanip 꼭 include해야하고!!!!
	해당 자리수에서 반올림 진행한다!!!
	소수점 자리수 뿐만아니라 fixed가 없이 사용되면 유효숫자 개수를 지정하는 조정자가 된다!!!

8.switch case 정수값에서 이 표현식은 정수이자 상수인 값만 올 수 있다.
즉, 수 말고 변수가 온다면 그 변수는 위에서 const로 상수로 초기화되어있어야만 한다.
9.setprecision(0)을 double형 값에 사용하면 일의 자리에서 반올림해 정수처럼 출력가능하다.
9-1.엄청 긴 정수값은 int형보다는 long long 타입을 사용해 완전하게 정수를 출력하자.
10.while(cin>>int 변수):cin이 정상적으로 입력되면 true반환하고 
잘못된 string이나 char가 입력되면 비정상 입력이므로 false반환하여 탈출한다. !!!!!!!
cntl+z에 대한 종료 이벤트에 적합함!!!!
11.양의 정수는 <0이 아니라 <1임을 꼭 기억하자. <0은 음이 아닌 정수를 의미한다.
12.bool에 대한 입력으로 0과 1이 아닌 false와 true로 저장한다면
boolalpha조정자를 사용해서 입력받으면 된다.
13.ceil():올림/floor():내림
14.함수의 시그니처:컴파일러가 함수를 구분하는 기준으로
매개변수 목록을 보고 판단한다.
15.함수의 오버로딩:함수명이 중복인 함수들로
반환형과 매개변수가 다르면 문제는 없을 것이다.
16.정적 지역 변수
static 자료형 변수명으로 선언되며, 메모리에 프로그램 종료전까지 남아있는게 특징이다.
17.변수 가려짐
:기본적으로 전역변수는 내부블록에서 동일한 이름의 변수가 없다면 스코프결정연산자(::)를 사용하지 않고도 사용이 가능하다.
다만, 내부블록에서 전역변수와 동일한 이름의 변수가 선언되어 있다면 내부블록에 의해 외부 변수를 사용하지 못하는데
18.inline 함수 키워드
:오버헤드를 줄일 수 있고 특징은 함수호출시 함수 내부 코드가 직접 가져와 실행된다는 것이다.
19.ctime라이브러리에 clock_t라는 자료형이 있는데
clock()함수를 사용해서 time(0)을 대신할 수 있다.
clock()함수는 실제 경과시간이 아닌 CPU가 프로그램 소요시간이므로
실제시간은 CLOCKS_PER_SEC로 나누어줘야한다.
20.double = 정수/정수는 기본이 정수값이므로 소수점 없다.
그래서, 소수점 원한다면 double/정수로 하나는 무조건 double형이어야지
저장될 때 소수점이 포함되어 있다.
이를 변수가려짐이라고 한다.
21.윤년 계산(+1)
400의 배수 또는 4의배수이자 100의배수는 아닌 해를 윤년이라고 한다.
year % 400 || (year % 100 != 0)&&(year % 4 == 0))

<실수 포인트>
1.두 변수 출력시 사이의 공백을 빼먹음.
2.반올림 고려해야됨. 반올림전 double형이면서 iomanip을 include해서 setprecision을 해야됨.
만약, setprecision(0)이면 일의자리에서 반올림.
3.정수 표현식에서 '\n'은 char형이므로 아스키코드로 정수 변환 가능.
하지만, "\n"은 char 배열이므로 변환 안됨. 오류 발생함.
4.형 변환시 static_limits가 아니라 static_cast<>()임을 헷갈리면 안된다.
5.double/int하면 소수점자리까지 출력된다.
*/