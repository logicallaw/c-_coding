/*
int size 반복 횟수 입력받는다.
이 횟수동안 숫자를 입력받는데
음이 아닌 정수만 입력받는다.
음수 입력되면 다시 입력 요청한다.
각 자리수를 더해 result출력한다.

논리
0이상의 양의 정수 입력받는데
각 자리수의 합을 알아야한다.
세자리수도 가능하고 두자리수도 가능하다.
10으로 나누어서 9보다 작거나 같은 수까지 나누어본다.
만약 123이 입력되면 10으로 나누어서 12가 되고 10으로 나누면 1이된다. 12+
625 10으로 나누면 몫 62이고 62를 10으로 나누면 6이 된다. 일의자리수는 625-600=25
8765 10/ 876이 된다. 87이 된다. 8이 된다.

876

unsigned int numSum = 0;
cin >> num;
while(num<10)
	numSum += (num - (num/10)*10);
	num = (num/10);
*/
#include <iostream>
using namespace std;
int main(void)
{
	int size;
	int num;
	do
	{
		cout << "입력받을 숫자의 개수를 입력해 주세요: ";
		cin >> size;
	} while (size < 1); //자연수만 가능

	int counter = 0;
	int numSum = 0;
	while (counter < size)
	{
		cout << counter + 1 << "번째 숫자를 입력해주세요: ";
		cin >> num;
		if (num < 0)
		{
			continue;
		}
		counter++;
		while (num)
		{
			numSum += num % 10;
			num /= 10;
		}
	}
	cout << endl << size << "개의 숫자의 각 자리수 합: " << numSum << endl;

	return 0;
}