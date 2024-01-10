#include <iostream>
using namespace std;
int main(void)
{
	int size;
	unsigned int num, num7;
	bool numBool = 0;

	cout << "정수의 개수를 양의 정수로 입력하세요: ";
	cin >> size;
	while (size < 1)
	{
		cout << "양의 정수를 입력하세요: ";
		cin >> size;
	}
	cout << endl;

	unsigned int counter{ 0 };
	while (counter < size)
	{
		cout << "정수를 입력해주세요: ";
		cin >> num;
		if (num % 7 == 0)
		{
			numBool = 1;
			num7 = num;
			break;
		}
		counter++;
	}

	cout << endl;
	if (numBool)
	{
		cout << num7 << "은/는 7로 나눌 수 있습니다." << endl;
	}
	else
	{
		cout << "7로 나눌 수 있는 숫자가 없습니다." << endl;
	}

	return 0;
}