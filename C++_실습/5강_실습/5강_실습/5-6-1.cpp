#include <iostream>
using namespace std;
int main(void)
{
	int num1, num2;
	int numSum = 0;
	cout << "N�� M�� �Է��� �ּ���: ";
	cin >> num1 >> num2;

	unsigned int counter{ 0 };
	while (counter <= (num2 - num1))
	{
		numSum += (num1 + counter);
		counter++;
	}

	cout << num1 << "���� " << num2 << "������ �������� ���� " << numSum << "�Դϴ�." << endl;

	return 0;
}