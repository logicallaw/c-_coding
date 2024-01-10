/*
두개의 변수를 입력받는다.
정수의 합을 입력한다.
int num1, num2;
int numSum = 0;
int size = num2 - num1;
논리
for (unsigned int counter {0}; counter <= num2; counter++)
	numSum += (num1 + counter);

cout << numSum

-5 5 (10) (0,1,2,3,...,9,10)
		  (-5,-4,...,4,5)
*/
#include <iostream>
using namespace std;
int main(void)
{
	int num1, num2;
	int numSum = 0;
	cout << "N과 M을 입력해 주세요: ";
	cin >> num1 >> num2;

	for (unsigned int counter{ 0 }; counter <= (num2 - num1); counter++)
	{
		numSum += (num1 + counter);
	}
	cout << num1 << "부터 " << num2 << "까지의 정수들의 합은 " << numSum << "입니다." << endl;

	return 0;
}