#include <iostream>
//����� �յ��ϰ� �й��ϴ� ���α׷��̴�.
//����� ����(���� ����)�� ����� ��(���� ����)�� �Է¹޴´�.
using namespace std;
int main(void)
{
	unsigned int apple, people;
	cout << "����� ������ �Է����ּ���: ";
	cin >> apple;
	cout << "����� ���� �Է����ּ���: ";
	cin >> people;

	cout << "��� ����� �ּ� " << apple / people << "���� ����� ������ �� �ֽ��ϴ�." << endl;

	return 0;
}