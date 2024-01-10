/*
복권 프로그램을 작성한다.
구매한 세 올바른 번호를 입력한다.
난수로 서로 다른 번호 세 번호를 생성한다.
난수로 생성된 세 번호와 입력된 세 번호와 비교해서
일치하는 개수에 따라 꽝, 1개, 2개, 축하한다 라는 메시지를 출력한다.
매 실행마다 다른 결과가 나와야한다 - time(0)

논리


로또 세 번호를 생성

int main()
	unsigned int num1,num2,num3;
	unsigned int result = 0;
	cin >> num1 >> num2 >> num3;
	int a = 0, b = 0, c = 0; // 로또 번호
	srand(time(0));
	unsigned int cnt = 0;

	//로또 번호 생성 코드
	while (cnt < 3)//서로 다른 세 번호 입력될때까지-이벤트 반복문
	{
		int temp = rand() % 10 + 1; //1~10중의 숫자 생성
		if (cnt = 0)
			a = temp;
			cnt++;
		if (temp != a)
			b = temp;
			cnt++;
		else if (temp != a && temp != b)
			c = temp;
			cnt++;
	}
	//번호 비교후 결과 출력
	if (num1 == a || num1 == b || num1 == c) result++;
	if (num2 == a || num2 == b || num2 == c) result++;
	if (num3 == a || num3 == b || num3 == c) result++;

	switch (result){
	case 1:
		cout << "1개 일치";
	case 2:
		cout << "2";
	case 3:
		cout << ;
	default:
		cout << "꽝..." << endl;
	}

	return 0;
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(void)
{
	unsigned int num1, num2, num3;
	unsigned int result = 0;

	cout << "세 개의 번호를 선택하세요(1~10): ";
	cin >> num1 >> num2 >> num3;

	int a = 0, b = 0, c = 0; // 로또 번호
	srand(time(0));
	unsigned int cnt = 0;

	//로또 번호 생성 코드
	while (cnt < 3)//서로 다른 세 번호 입력될때까지-이벤트 반복문
	{
		int temp = rand() % 10 + 1; //1~10중의 숫자 생성
		if (cnt == 0)
		{
			a = temp;
			cnt++;
		}
		if (temp != a && cnt == 1)
		{
			b = temp;
			cnt++;
		}
		else if (temp != a && temp != b && cnt == 2)
		{
			c = temp;
			cnt++;
		}
	}
	//번호 비교후 결과 저장
	if (num1 == a || num1 == b || num1 == c) result++;
	if (num2 == a || num2 == b || num2 == c) result++;
	if (num3 == a || num3 == b || num3 == c) result++;

	cout << "\n당첨 번호: " << a << " " << b << " " << c;
	cout << "\n선택 번호: " << num1 << " " << num2 << " " << num3 << endl;


	switch (result) {
	case 1:
		cout << "1개 일치";
		break;
	case 2:
		cout << "2개 일치";
		break;
	case 3:
		cout << "축하합니다. 모두 일치!";
		break;
	default:
		cout << "꽝...";
	}

	return 0;
}