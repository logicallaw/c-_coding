#include <iostream>
using namespace std;
int main(void)
{
	int num1, num2;
	int numSum = 0;
	cout << "N�� M�� �Է��� �ּ���: ";
	cin >> num1 >> num2;

	for (unsigned int counter = num1 ; counter <= num2; counter++)
	{
		numSum += counter;
	}
	cout << num1 << "���� " << num2 << "������ �������� ���� " << numSum << "�Դϴ�." << endl;

	return 0;
}