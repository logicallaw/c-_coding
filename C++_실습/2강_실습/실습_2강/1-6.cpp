#include <iostream>
//����� ������ �Է¹ް� ����ϴ� ���α׷��̴�.
using namespace std;
int main(void)
{
	char name[50]; //���ڿ� ���
	unsigned int age, glasses; //����� ����,�Ȱ濩��
	double eyeL, eyeR; 
	cout << "�̸��� �Է����ּ���: ";
	cin >> name;
	cout << "���̸� �Է����ּ���: ";
	cin >> age;
	cout << "���� �÷��� �Է����ּ���: ";
	cin >> eyeL;
	cout << "������ �÷��� �Է����ּ���: ";
	cin >> eyeR;
	cout << "�Ȱ� ���뿩�θ� �Է����ּ���(True : 1 / False : 0): ";
	cin >> glasses;

	cout << endl;
	cout << "�̸�: " << name << endl;
	cout << "����: " << age << endl;
	cout << "���� �÷� : " << eyeL << endl;
	cout << "������ �÷� : " << eyeR << endl;
	cout << "�Ȱ� ���뿩��: " << glasses << endl;

	return 0;

}