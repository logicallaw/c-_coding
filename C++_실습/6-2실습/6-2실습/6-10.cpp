/*
���� ����, �Ǽ� ���� �����ε� �Լ� �ۼ�
�����ȣ + - * /
0���� ������ ����� 0�̴�.

���� ������ �Ǽ� �Է¹޴´�.
���� ��ȣ�� ���� ����� �ٸ��� �Ѵ�.
������ ������ ���� �����Ѵ�.

���� �����Լ�
int numO(int x, int y, string op)
	int result = 0;
	switch (op)
	case "+":
		result = x + y;
		break;
	case "-":
		result = x - y;
		break;
	case "*":
		result = x * y;
		break;
	case "/":
		if (y) result = x / y;
		break;
	case "%":
		if (y) result = x % y;
		break;
�Ǽ� �����Լ�
double numO(double x, double y, string op)

int a,b,op1;
cin >> a >> b >> op1;

*/
#include <iostream>
using namespace std;

int numO(int x, int y, char op);
double numO(double x, double y, char op);

int main(void)
{
	int a, b;
	char op1;
	cout << "���� ������� �Է��ϼ���: ";
	cin >> a >> op1 >> b;

	cout << "��� ���: " << numO(a, b, op1) << endl;

	double c, d;
	char op2;
	cout << "\n�Ǽ� ������� �Է��ϼ���: ";
	cin >> c >> op2 >> d;

	cout << "��� ���: " << numO(c, d, op2) << endl;

	return 0;
}

int numO(int x, int y, char op)
{
	int result = 0;
	switch (op)
	{
	case '+':
		result = x + y;
		break;
	case '-':
		result = x - y;
		break;
	case '*':
		result = x * y;
		break;
	case '/':
		if (y) result = x / y;
		break;
	default:
		break;
	}	
	return result;
}
double numO(double x, double y, char op)
{
	double result = 0;
	switch (op)
	{
	case '+':
		result = x + y;
		break;
	case '-':
		result = x - y;
		break;
	case '*':
		result = x * y;
		break;
	case '/':
		if (y) result = x / y;
		break;
	default:
		break;
	}
	return result;
}