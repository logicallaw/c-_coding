/*
int형인 num 입력받는다.
(이때, 음수 입력 받으면 do~while문 처리)

num=0:0! = 1
num!=0:while문 실행
unsigned int cnt=0
int numP=1;
while (cnt<num)
	numP *= (++cnt)
cout << num << "! = " << numP << endl;
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
	int num;
	int cnt = 0;
	long long result = 1;
	do
	{
		cout << "팩토리얼의 크기를 음수가 아닌 정수로 입력하세요: ";
		cin >> num;
	} while (num < 0);

	//논리
	if (num)
	{
		while (cnt < num)
		{
			result *= (++cnt);
		}
	}
	cout << "\n" << num << "! = " << result << endl;

	return 0;
}