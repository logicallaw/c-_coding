/*
양의 정수만 입력됨을 가정한다
-1이 입력되면 프로그램이 종료된다
수를 뒤집어서 출력한다.
516 0+6*
	0+6*(num/10)
	counter = 1;
while 몇자리수인지 확인 counter (num)
num / 10
512
51/5/0
counter *= 10 ; counter = 3


512 100 200
51 10 100
5 1 5
0 

{result = result + (num%10) * (counter)
counter /= 10;
num = num / 10;}
*/
#include <iostream>
using namespace std;
int main(void)
{
	int promptN;
	do
	{
		unsigned int num, counter = 1, numReverse = 0, temp;
		//입력을 받는다.
		cout << "양의 정수를 입력하세요(종료는 -1): ";
		cin >> promptN;
		num = promptN;
		temp = num;
		//몇 자리수 확인한다.
		while (temp > 10)
		{
			temp /= 10;  //87,8,0
			counter *= 10;
		}
		//수를 뒤집는다.
		while (num)
		{
			numReverse += ((num % 10) * counter); //876 1000
			counter /= 10;
			num /= 10;
		}
		if (promptN != -1) cout << "뒤집은 결과: " << numReverse << endl;
	} while (!(promptN == -1));

}