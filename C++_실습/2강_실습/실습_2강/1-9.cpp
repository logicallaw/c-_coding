#include <iostream>
//�ڱ� �Ұ��� ����ϴ� ���α׷��̴�.
using namespace std;
int main(void)
{
	char name[50];
	unsigned int a, b;

	cout << "�й��� �Է��ϼ���: ";
	cin >> a;
	cout << "�̸��� �Է��ϼ���: ";
	cin >> name;
	cout << "���̸� �Է��ϼ���: ";
	cin >> b;

	cout << endl;
	cout << "�ȳ��ϼ���, ���� " << name << "�Դϴ�." << endl;
	cout << "�� �й��� " << a << "�̰�, ���̴� " << b << "���Դϴ�." << endl;

	return 0;
}