#include <iostream>
#include <ctime>
using namespace std;
int main(void)
{
	long etime = time(0);
	etime /= 86400;
	etime %= 7;
	cout << time(0) << endl;
	switch (etime)
	{
	//���н� �ð��� ����:1970�� 1�� 1�� �����
	//����, time(0)�� ���� ���� ���н� �ð��� �������� ����� �ð��̴�.
	//�Ϸ�� 86400���̹Ƿ� ������ �ϼ��� ������
	//7�� ������ ������ ���� �� �ִ�.
	case 0:
		cout << "������ ������Դϴ�."; break;
	case 1:
		cout << "������ �ݿ����Դϴ�."; break;
	case 2:
		cout << "������ ������Դϴ�."; break;
	case 3:
		cout << "������ �Ͽ����Դϴ�."; break;
	case 4:
		cout << "������ �������Դϴ�."; break;
	case 5:
		cout << "������ ȭ�����Դϴ�."; break;
	case 6:
		cout << "������ �������Դϴ�."; break;
	}
	cout << endl;

}