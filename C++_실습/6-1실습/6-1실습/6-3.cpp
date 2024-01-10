/*
주사위의 눈의 합으로 진행
사람과 프로그램의 대결
첫 시도에서 7 or 11나오면 승리, 2,3,12나오면 패배
첫 시도에서 위 숫자들 안나오면 첫시도에서 나온 숫자가
이후에 먼저 나오면 승리. 만약에, 7이 먼저 나오면 패배.
rollDice함수는 두개의 주사위를 굴려 눈의 합 얻을 수 있는 함수.

int main(void)
	int a = roolDice(void);
	int temp = 0;
	bool aBool = 0;
	if (a == 7 || a == 11)
		승리
		aBool = 1;
	else if (a == 2 || a == 3 || a == 12)
		패배
		aBool = 1;

	while (!(temp == a || temp == 7) && aBool == 0)
		temp = roolDice();
	
	if (temp == a)
		승리
	else if (temp == 7)
		패배

int rollDice(void);
int rollDice(void)
	난수를 이용해 랜덤한 1~6의 값 리턴
	srand(time(0)) //공정성을 위해 시간으로 시드 할당함.
	a = rand() % 6 + 1;
	b = rand() % 6 + 1;
	cout << "Player rolled " << a << " + " << b << " = " << a + b << endl;
	return a + b;
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int roolDice(void);

int main(void)
{
	srand(time(0));
	int numFirst = roolDice();
	int numTemp = 0;
	bool numBool = 0;
	if (numFirst == 7 || numFirst == 11)
	{
		cout << "\nPlayer wins" << endl;
		numBool = 1;
	}
	else if (numFirst == 2 || numFirst == 3 || numFirst == 12)
	{
		cout << "\nPlayer loses" << endl;
		numBool = 1;
	}
	else
	{
		cout << "\nPoint is " << numFirst << endl;
	}
	while (!(numFirst == numTemp || numTemp == 7) && numBool == 0)
	{
		numTemp = roolDice();
	}
	if (numTemp == numFirst)
	{
		cout << "\nPlayer wins" << endl;
	}
	else if (numTemp == 7)
	{
		cout << "\nPlayer loses" << endl;
	}

}

int roolDice(void)
{
	int a, b;
	//난수를 이용해 랜덤한 1~6의 값 리턴
    //공정성을 위해 시간으로 시드 할당함.
	a = rand() % 6 + 1;
	b = rand() % 6 + 1;
	cout << "Player rolled " << a << " + " << b << " = " << a + b << endl;

	return (a + b);
}
