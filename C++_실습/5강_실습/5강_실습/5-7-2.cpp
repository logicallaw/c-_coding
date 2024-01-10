#include <iostream>
using namespace std;
int gcd_recursive(int a, int b);

int main(void)
{
	/*	
	재귀적인 유클리드 호제법을 이용한 두 수의 최대공약수 구하기
	시간 복잡도: O(logN)
	*/
	unsigned int num1, num2;
	cout << "두 자연수를 입력해주세요: ";
	cin >> num1 >> num2;

	cout << "\n두 수 num1과 num2의 최대공약수: " << gcd_recursive(num1, num2) << endl;
}

int gcd_recursive(int a, int b)
{
	if (!b)
	{
		return a;
	}
	return gcd_recursive(b, a % b);
}