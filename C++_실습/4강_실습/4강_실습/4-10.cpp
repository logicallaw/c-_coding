#include <iostream>
using namespace std;
/*
unsigned int ������� �Է� �޴´�.
unsigned int �ϼ� �Է� �޴´�.
(�������+�ϼ�)%7 --- 1,2,3,4,5,6,0
������ ���� ���� ���� �����.
switch��
*/
int main(void)
{
	unsigned int dayNum, dayAdd;
	cout << "���� ������ �Է��ϼ��� (1: ������, 2: ȭ����, ..., 7: �Ͽ���): ";
	cin >> dayNum;
	cout << "�� ���� �Է��ϼ���: ";
	cin >> dayAdd;

	switch ((dayNum + dayAdd) % 7) {
	case 1:
		cout << "������" << endl;
		break;
	case 2:
		cout << "ȭ����" << endl;
		break;
	case 3:
		cout << "������" << endl;
		break;
	case 4:
		cout << "�����" << endl;
		break;
	case 5:
		cout << "�ݿ���" << endl;
		break;
	case 6:
		cout << "�����" << endl;
		break;
	default:
		cout << "�Ͽ���" << endl;
	}

	return 0;
}