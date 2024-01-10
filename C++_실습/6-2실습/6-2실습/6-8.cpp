/*
양의 정수 입력 받아 1부터 입력받은 값까지의 합 구하는 프로그램

함수
func1(num)
if (num < 1) return 0;
else return num + func1(num-1)
*/
#include <iostream>
using namespace std;

int numSum(int num);

int main(void)
{
	int number;
	cout << "양의 정수를 입력하세요: ";
	cin >> number;
	cout << "1부터 " << number << "까지의 합: " << numSum(number) << endl;

	return 0;
}

int numSum(int num)
{
	if (num < 1) return 0;
	else return num + numSum(num - 1);
}