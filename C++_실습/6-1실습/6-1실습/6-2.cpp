/*
주사위 6백만번을 굴려 나오는 눈의 횟수를 출력한다.
1~6에 대해 각각 굴려 나온 눈의 횟수를 한줄씩 출력한다.
주사위를 굴려 눈의 값을 얻을 수 있는 getFace함수를 정의한다.

주사위의 횟수=6000000;
getFace
	랜덤한 값/매실행마다 다름
	난수 srand(seed)
	rand()값이 출력
	temp=rand(time(0))
	a=(temp % 6) + 1 //1~6
	for (0~<6000000)
		a = (rand() % 6) + 1;

		switch(a)
		case 1
		case 2
			break
		...
		case 6

		if (a==1)
			cnt1++;
		else if (a==2)

*/
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

void getFace(int x);
int main(void)
{
	int num = 6000000;
	cout << setw(4) << left << "Face" << setw(15) << right << "Frequnecy" << endl;
	getFace(num);

	return 0;
}

void getFace(int x)
{
	int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0, cnt5 = 0, cnt6 = 0;
	int temp;
	srand(time(0));
	for (unsigned int counter{ 0 }; counter < x; counter++)
	{
		temp = rand() % 6 + 1;
		switch (temp)
		{
		case 1:
			cnt1++;
			break;
		case 2:
			cnt2++;
			break;
		case 3:
			cnt3++;
			break;
		case 4:
			cnt4++;
			break;
		case 5:
			cnt5++;
			break;
		case 6:
			cnt6++;
			break;
		}
	}
	cout << setw(4) << right << 1 << setw(15) << right << cnt1 << endl;
	cout << setw(4) << right << 2 << setw(15) << right << cnt2 << endl;
	cout << setw(4) << right << 3 << setw(15) << right << cnt3 << endl;
	cout << setw(4) << right << 4 << setw(15) << right << cnt4 << endl;
	cout << setw(4) << right << 5 << setw(15) << right << cnt5 << endl;
	cout << setw(4) << right << 6 << setw(15) << right << cnt6 << endl;
}