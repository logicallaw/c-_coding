#include <iostream>
using namespace std;
/*
double�� a,b �Է¹���
char�� ������ �Է¹���
�������� ������ ���� ������ �ٸ��� �Ѵ�.
double�� ��� result �����
*/
int main(void)
{
	int num1, num2;
	char operatorN;
	double resultN;

	cout << "���� �Է����ּ���: ";
	cin >> num1 >> operatorN >> num2;

	switch (operatorN) {
	case '+':
		resultN = num1 + num2;
		break;
	case '-':
		resultN = num1 - num2;
		break;
	case '*':
		resultN = num1 * num2;
		break;
	case '/':
		resultN = static_cast<double>(num1) / num2;
		break;
	case '%':
		resultN = num1 % num2;
		break;
	}
	cout << num1 << " " << operatorN << " " << num2 << " = " << resultN << endl;

	return 0;

}