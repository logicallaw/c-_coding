#include <iostream>
using namespace std;
int main(void)
{
	unsigned int num1 = numeric_limits<unsigned int>::max();
	unsigned int num2 = numeric_limits<unsigned int>::min();
	int num3 = 2147483647;

	cout << "��ȣ ���� ������ �ִ�: " << num1 << endl;
	cout << "��ȣ ���� ������ �ּڰ�: " << num2 << endl;

	num1 += 1;
	num2 -= 1;

	cout << "�����÷ο찡 �Ͼ num1 + 1: " << num1 << endl;
	cout << "����÷ο찡 �Ͼ num2 - 1: " << num2 << endl;
	cout << "int���� num3�� ǥ���� �� �ִ� ���� �ִ��� 2147483647�̰�" << endl;
	cout << "���⼭ num3+1�� �ϸ� �����÷ο찡 �߻��� int �ڷ����� �ּڰ��� -2147483647�� ������ ��µ� ���̴�." << endl;
	cout << "�����÷ο찡 �Ͼ num3 + 1: " << num3 + 1 << endl;

	return 0;
}