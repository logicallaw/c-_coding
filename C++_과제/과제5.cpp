#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int menu(); //메뉴를 출력합니다.
string action(int number); //행동 number를 string형으로 변환합니다.
void process(int& scoreA, int& scoreB, int numA, int numB); //행동상성 비교후 점수판단 합니다.

int main(void)
{
	int size;
	int numA, numB;
	cout << "<1999 경주 아시안 게임 여자 펜싱 사브르 결승전>" << endl;
	cout << "승점을 입력하세요: ";
	cin >> size;
	cout << endl;

	int scoreA = 0, scoreB = 0;

	while (!(scoreA == size || scoreB == size)) //승점에 도달하면 프로그램은 멈춘다.
	{
		srand(time(0));
		//나희도 선수의 number를 입력받습니다.
		numA = menu();

		//고유림 선수의 행동은 난수로 무작위 값을 받습니다.
		numB = rand() % 3 + 1;

		//나희도 선수와 고유림 선수의 행동 number를 출력합니다.
		cout << "나희도 행동: " << numA << ", 고유림 행동: " << numB << endl;

		//process함수를 사용해 점수를 매깁니다.
		
		process(scoreA, scoreB, numA, numB);

		//process함수를 바탕으로 현재 스코어를 출력한다.
		cout << "나희도 점수: " << scoreA << ", 고유림 점수: " << scoreB << endl << endl;
	}

	if (scoreA == size)
		cout << "나희도 금메달!!";
	else
		cout << "고유림 금메달!!(ㅠㅠ)";

	return 0;
}

int menu()
{
	int temp;
	cout << "동작을 선택하세요." << endl;
	cout << "1. 막기 2. 베기 3. 찌르기" << endl;
	cout << "? ";
	cin >> temp;
	return temp;
}

string action(int number)
{
	if (number == 1)
		return "막기";
	if (number == 2)
		return "베기";
	else
		return "찌르기";
}

void process(int& scoreA, int& scoreB, int numA, int numB)
{
	string tempA, tempB;

	//나희도 선수의 int형 행동을 action함수를 걸쳐서 string형 행동으로 변경합니다.
	tempA = action(numA);

	//고유림 선수의 int형 행동을 action함수를 걸쳐서 string형 행동으로 변경합니다.
	tempB = action(numB);

	//나희도 선수와 고유림 선수의 행동상성을 판단해 점수를 매긴다.

	/*
	행동상성의 규칙은 다음과 같습니다.
	막기(1) > 베기(2)
	찌르기(3) > 막기(1)
	베기(2) > 찌르기(3)
	*/

	if ((tempA == "막기" && tempB == "막기") || (tempA == "찌르기" && tempB == "찌르기") || (tempA == "베기" && tempB == "베기"))
	{
		//점수변화X
		//생략 가능하지만 코드 작성하였습니다.
	}
	else if (tempA == "막기" && tempB == "찌르기")
		scoreB++;
	else if (tempA == "막기" && tempB == "베기")
		scoreA++;
	else if (tempA == "찌르기" && tempB == "막기")
		scoreA++;
	else if (tempA == "찌르기" && tempB == "베기")
		scoreB++;
	else if (tempA == "베기" && tempB == "막기")
		scoreB++;
	else if (tempA == "베기" && tempB == "찌르기")
		scoreA++;
	
	//리턴값은 없습니다.
}