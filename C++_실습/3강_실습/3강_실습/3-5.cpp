#include <iostream>
//����� ȭ�� ������ double������ �ι� �Է� �ް�
//������ ���� double���� �Է¹޾�
//������ ���̸� double������ ����Ѵ�.
using namespace std;
int main(void)
{
	double scW, scH, sizeW, sizeH;
	cout << "������� ȭ�� ������ �Է��� �ּ���: ";
	cin >> scW>> scH;
	cout << "ȭ���� ���� ���̸� �Է��� �ּ���: ";
	cin >> sizeW;

	sizeH = (scH * sizeW) / scW;
	cout << "\n���� ����: " << sizeH;

	return 0;
}