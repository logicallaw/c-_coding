#include <iostream>
using namespace std;

int fib(int n);

int main(void)
{
	int num;
	cout << "���ڸ� �Է����ּ���: ";
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
		temp = currf;  //���� �ӽ� ����
		currf += pref; //������+����
		pref = temp; //�ӽ� ����� ������ ���������� ����
	}
	return currf;
}