#include <iostream>
using namespace std;
int main(void)
{
	unsigned int num;
	unsigned int numSum = 0;
	cout << "자연수를 입력해주세요: ";
	cin >> num;
	while (num)
	{
		numSum += num % 10;
		num /= 10;
	}
	cout << "numSum: " << numSum << endl;
	return 0;
}