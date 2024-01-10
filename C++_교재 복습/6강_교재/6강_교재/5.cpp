#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main(void)
{
	int low = 5;
	int high = 15;
	int tryLimit = 5;
	int guess;

	srand(time(0)); // 현재 시간으로 난수를 생성한다.
	int temp = rand(); // 난수를 입력받는다.
	int num = temp % (high - low + 1) + low;

	bool found = false;
	for (int counter{ 1 }; counter <= tryLimit && !found; ++counter)
	{
		do
		{
			cout << "5~15 사이의 정수를 입력하세요: ";
			cin >> guess;
		} while (guess < 5 || guess>15);

		if (guess == num)
		{
			found = true;
		}
		else if (guess > num)
		{
			cout << "더 작은 숫자입니다." << endl;
		}
		else
		{
			cout << "더 큰 숫자입니다." << endl;
		}
	}
	if (found)
	{
		cout << "축하합니다. 추측에 성공했습니다." << endl;
		cout << "답: " << num << endl;
	}
	else
	{
		cout << "아쉽게 추측에 실패했습니다." << endl;
		cout << "답: " << num << endl;
	}
}