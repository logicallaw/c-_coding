#include <iostream>
using namespace std;
/*
���� ������ �Էµȴ�.
unsigned int ����
bool ����,����

���� ����(������ ���)->�������� �ٷ�
���� ����(�ϳ��� �����ϸ� �����޽���)->
	����X -->���� ����
	(else)
		//����O
		18�� �̻�&&����O --> ������ �޽���

18���̻�/����=boolAnd
boolAnd
	����
		�����


����

*/
int main(void)
{
	unsigned int age;
	bool background, bachelor;

	cout << "���̸� �Է��ϼ���: ";
	cin >> age;
	cout << "�̹� ������ �ֽ��ϱ�? (1: ��, 0: �ƴϿ�): ";
	cin >> background;
	cout << "������ �����ϰ� �ֽ��ϱ�? (1: ��, 0: �ƴϿ�): ";
	cin >> bachelor;

	if (bachelor)
	{
		if ((age >= 18) && (background))
		{
			cout << "������ ���εǾ����ϴ�. ���� ������ �ȳ��帮�ڽ��ϴ�." << endl;
		}
		else if (!(age >= 18) && (background))
		{
			cout << "������ �����Ǿ����ϴ�. ���̰� 18�� �̻��̰� ������ �־�� �մϴ�.";
		}

	}
	else if (!bachelor)
	{
		cout << "������ �����Ǿ����ϴ�. ������ �ʿ��մϴ�." << endl;
	}

	return 0;
}