#include <iostream>
using namespace std;
int main(void)
{
	double num1 = numeric_limits<double>::max();
	double num2 = numeric_limits<double>::lowest();
	cout << "double���� �ִ�: " << num1 << endl;
	cout << "double���� �ּڰ�: " << num2 << endl;

	num1 *= 1000.0;
	num2 *= 1000.0;

	cout << "�����÷ο찡 �Ͼ num1 * 1000�� ��: " << num1 << endl;
	cout << "����÷ο찡 �Ͼ num2 * 1000�� ��: " << num2 << endl;

	return 0;
}