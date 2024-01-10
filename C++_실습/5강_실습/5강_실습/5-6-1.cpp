#include <iostream>
using namespace std;
int main(void)
{
	int num1, num2;
	int numSum = 0;
	cout << "N과 M을 입력해 주세요: ";
	cin >> num1 >> num2;

	unsigned int counter{ 0 };
	while (counter <= (num2 - num1))
	{
		numSum += (num1 + counter);
		counter++;
	}

	cout << num1 << "부터 " << num2 << "까지의 정수들의 합은 " << numSum << "입니다." << endl;

	return 0;
}