#include<iostream>
using namespace std;
/*
unsigned int�� 5������ ���� ���� �Է�
switch�� ���
ī��Ʈ�ٿ� ���
*/

int main(void)
{
	unsigned int num;
	cout << "���ڸ� �Է����ּ���: ";
	cin >> num;

	cout << "\nī��Ʈ�ٿ�" << endl;
	switch (num) {
	case 5:
		cout << "�ټ�" << endl;
	case 4:
		cout << "��" << endl;
	case 3:
		cout << "��" << endl;
	case 2:
		cout << "��" << endl;
	default :
		cout << "�ϳ�" << endl;
	}
	return 0;
}