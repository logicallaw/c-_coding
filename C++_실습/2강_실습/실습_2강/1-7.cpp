#include <iostream>
//�� ���ڻ���� �����ڸ� ���� �Է¹޾� �� ���� ������ ������ ������ �ľ��� ����Ѵ�.
using namespace std;
int main(void)
{
	char a, b; //���������� �Էµ�
	unsigned int num;
	cout << "�� �����ڸ� �Է����ּ���: ";
	cin >> a >> b;
	num = (b - a - 1);
	cout << "�� ���ڻ��̿��� " << num << "���� ���ڰ� �����մϴ�." << endl;

	return 0;
}