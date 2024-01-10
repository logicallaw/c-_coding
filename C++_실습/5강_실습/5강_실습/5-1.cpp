/*
숫자들의 합과 곱을 계산하는 프로그램이다.
int형인 숫자의 개수(numCnt)를 입력받는다.
(이때, 음이 아닌 정수가 아닌 수가 입력받으면 다시 요청한다.do while문)
numCnt만큼 수를 입력받아 각각 double형인 numSum과 double형인 numMut(fixed,setprecision(2))에 계산하여
출력한다.
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
	int numCnt;
	double numInput;
	double numSum = 0.00, numMul = 1.00;
	do
	{
		cout << "숫자의 개수를 음수가 아닌 정수로 입력하세요: ";
		cin >> numCnt;
	} while (numCnt < 0);

	cout << endl;
	for (unsigned int counter = 0; counter < numCnt; counter++)
	{
		cout << "숫자를 입력하세요: ";
		cin >> numInput;
		numSum += numInput;
		numMul *= numInput;
	}
	cout << fixed << setprecision(2);
	cout << "\n합 = " << numSum;
	cout << "\n곱 = " << numMul << endl;

	return 0;
}