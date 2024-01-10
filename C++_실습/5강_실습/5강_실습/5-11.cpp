/*
입력한수의 약수를 구하는 프로그램이다.
한 줄에 5개씩 출력한다.
unsigned int num 자연수만 입력됨을 가정한다.
소수면 소수를 출력한다.
1은 출력하지 않는다.
num1 num2
while (!(num2 == 0))
temp num2
num2 = num1 % num2
num1 temp

num자연수
253
int numCnt = 0;
for 문 (1<=~<=num) cnt
	if (num % cnt == 0 && cnt != num)
	else if (num % cnt == 0 && cnt == num)
		if (cntForNum == 1)
			소수
		else
			마지막수 출력
	if (num % cnt == 0)
		numCnt++;
		cout << cnt << " ";
		if (!(numCnt % 5))
			cout << endl;
		bool = 1;
if (!bool)
	num 소수이다

*/
#include <iostream>
using namespace std;
int main(void)
{
	unsigned int num, numForCnt = 0;
	cout << "숫자를 입력해주세요: ";
	cin >> num;
	for (unsigned int counter{ 2 }; counter <= num; counter++)
	{
		if (num % counter == 0 && counter != num)
		{
			cout << counter << " ";
			numForCnt++;
			if (numForCnt % 5 == 0) cout << endl;
		}
		else if (counter == num)
		{
			if (!numForCnt) cout << num << " 은(는) 소수입니다." << endl;
			else cout << counter << " ";
		}
	}
	return 0;
}