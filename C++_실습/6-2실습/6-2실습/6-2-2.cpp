#include <iostream>
using namespace std;

int fib(int n);

int main(void)
{
	int num;
	cout << "숫자를 입력해주세요: ";
	cin >> num;

	cout << "fib(num): " << fib(num) << endl;

	return 0;
}

int fib(int n)
{
	if (n == 0 || n == 1)
		return n;
	int temp, pref = 0, currf = 1; 
	for (int cnt{ 2 }; cnt <= n; cnt++)
	{
		temp = currf;  //전항 임시 저장
		currf += pref; //전전항+전항
		pref = temp; //임시 저장된 전항은 전전항으로 변경
	}
	return currf;
}