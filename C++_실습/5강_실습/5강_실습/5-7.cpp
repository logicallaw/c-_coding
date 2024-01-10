/*
두개의 변수 입력을 받는다.
크기 순서 없이 입력되며 자연수만 입력된다.
두 수의 최대공약수를 출력한다.
unsigned int num1,num2,result;
둘 중 하나의 수로 증감시켜서
나누어떨어지면 그 증감된 수가 최대공약수가 될거다.
결국엔 반복문 일일이 나올때까지 해야한다.
다만, 최대공약수가 없다면 끝까지 찾아야한다는 단점이 있다.
for (unsigned int counter = num1; counter >= 1; counter--)
{
	if ((num2 % counter == 0) && (counter != 1))
	{	
		result = counter;
		break;
	}
}
*/
#include <iostream>
using namespace std;
int main(void)
{
	/*
	반복문을 이용한 두 수의 최대공약수 구하기(브루트 포스 방식)
	시간 복잡도: O(N)
	*/
	unsigned int num1, num2;
	cout << "N과 M을 입력해 주세요: ";
	cin >> num1 >> num2;

	for (unsigned int counter = num1; counter >= 1; counter--)
	{
		if ((num1 % counter == 0) && (num2 % counter == 0))
		{
			cout << num1 << ", " << num2 << "의 최대공약수: " << counter;
			break;
		}
	}
	return 0;
}