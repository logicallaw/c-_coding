#include <iostream>
//���� ����� ���� ����ϴ� ���α׷��̴�.
//��Ű�� ���� ģ���� ���� ����ڿ��� �Է¹޴´�.
//�ڷ����� 3-6�� �����ϰ� �� ��½� ������ ��Ű�� ����Ѵ�.
using namespace std;
int main(void)
{
	unsigned int snak, friends;
	cout << "��Ű�� ������ �Է����ּ���: ";
	cin >> snak;
	cout << "ģ���� ���� �Է����ּ���: ";
	cin >> friends;

	cout << "���� ��Ű�� ����: " << snak % friends << endl;

	return 0;
}