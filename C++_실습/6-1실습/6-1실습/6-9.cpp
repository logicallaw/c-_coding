/*
������ ���Ǹ� ���ϴ� ���α׷��̴�.
���� �Ǽ��� �Էµ��� �����Ѵ�.
���� �Ǽ� double num1, num2�� �Էµȴ�.
���Ǹ� ����� ����Ѵ�.
�������� 3.14

���� ��
double result = ((pi * num1 * num1) * num2 ) / 3;
*/
#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
	double num1, num2;
	cout << "�������� �Է��ϼ���: ";
	cin >> num1;
	cout << "���̸� �Է��ϼ���: ";
	cin >> num2;
	//3.14 * pow(num1,2) * num2 / 3
	cout << endl << "����: " << 3.14 * pow(num1, 2) * num2 / 3 << endl;

	return 0;
}