/*
���� ���α׷��� �ۼ��Ѵ�.
������ �� �ùٸ� ��ȣ�� �Է��Ѵ�.
������ ���� �ٸ� ��ȣ �� ��ȣ�� �����Ѵ�.
������ ������ �� ��ȣ�� �Էµ� �� ��ȣ�� ���ؼ�
��ġ�ϴ� ������ ���� ��, 1��, 2��, �����Ѵ� ��� �޽����� ����Ѵ�.
�� ���ึ�� �ٸ� ����� ���;��Ѵ� - time(0)

��


�ζ� �� ��ȣ�� ����

int main()
	unsigned int num1,num2,num3;
	unsigned int result = 0;
	cin >> num1 >> num2 >> num3;
	int a = 0, b = 0, c = 0; // �ζ� ��ȣ
	srand(time(0));
	unsigned int cnt = 0;

	//�ζ� ��ȣ ���� �ڵ�
	while (cnt < 3)//���� �ٸ� �� ��ȣ �Էµɶ�����-�̺�Ʈ �ݺ���
	{
		int temp = rand() % 10 + 1; //1~10���� ���� ����
		if (cnt = 0)
			a = temp;
			cnt++;
		if (temp != a)
			b = temp;
			cnt++;
		else if (temp != a && temp != b)
			c = temp;
			cnt++;
	}
	//��ȣ ���� ��� ���
	if (num1 == a || num1 == b || num1 == c) result++;
	if (num2 == a || num2 == b || num2 == c) result++;
	if (num3 == a || num3 == b || num3 == c) result++;

	switch (result){
	case 1:
		cout << "1�� ��ġ";
	case 2:
		cout << "2";
	case 3:
		cout << ;
	default:
		cout << "��..." << endl;
	}

	return 0;
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(void)
{
	unsigned int num1, num2, num3;
	unsigned int result = 0;

	cout << "�� ���� ��ȣ�� �����ϼ���(1~10): ";
	cin >> num1 >> num2 >> num3;

	int a = 0, b = 0, c = 0; // �ζ� ��ȣ
	srand(time(0));
	unsigned int cnt = 0;

	//�ζ� ��ȣ ���� �ڵ�
	while (cnt < 3)//���� �ٸ� �� ��ȣ �Էµɶ�����-�̺�Ʈ �ݺ���
	{
		int temp = rand() % 10 + 1; //1~10���� ���� ����
		if (cnt == 0)
		{
			a = temp;
			cnt++;
		}
		if (temp != a && cnt == 1)
		{
			b = temp;
			cnt++;
		}
		else if (temp != a && temp != b && cnt == 2)
		{
			c = temp;
			cnt++;
		}
	}
	//��ȣ ���� ��� ����
	if (num1 == a || num1 == b || num1 == c) result++;
	if (num2 == a || num2 == b || num2 == c) result++;
	if (num3 == a || num3 == b || num3 == c) result++;

	cout << "\n��÷ ��ȣ: " << a << " " << b << " " << c;
	cout << "\n���� ��ȣ: " << num1 << " " << num2 << " " << num3 << endl;


	switch (result) {
	case 1:
		cout << "1�� ��ġ";
		break;
	case 2:
		cout << "2�� ��ġ";
		break;
	case 3:
		cout << "�����մϴ�. ��� ��ġ!";
		break;
	default:
		cout << "��...";
	}

	return 0;
}