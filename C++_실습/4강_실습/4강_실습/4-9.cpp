#include <iostream>
#include <iomanip>
using namespace std;
/*
int �����ȣ�� �Է¹޴´�.
int �� ���� ������ �Է¹޴´�.

����ó��
������ ���� 0�̸� ����ó���Ѵ�.
�����ȣ ��ȣ �߸� �ԷµǸ� ����ó���Ѵ�.

��
switch�� ���
default �����ȣ ����ó��
if�� ���� �����¼� 0���� üũ
����� int�� result�� ������.

���ǻ���
1.�⺻������ �Ҽ� ������ ǥ��� ������ ǥ���(����ǥ���)�����µ�
fixed����ϸ� ���� ǥ�Ⱑ �ƴ� ���� �Ҽ���ǥ��� ��µȴ�.
2.setprecision����ϱ� ���ؼ��� �ݵ�� iomanip�� include�ؾ��Ѵ�.
3.���� ������ �������� ���� �Ҽ��� ��Ÿ���� �ʹٸ� ���������� ���� double������
casting�ؾ��Ѵ�.
*/
int main(void)
{
	int num1, num2, result;
	int operN;

	cout << "������ �����ϼ��� (1: ����, 2: ����, 3: ����, 4: ������): ";
	cin >> operN;

	if (0 < operN && operN <5) 
	{
		cout << "�� ���� ���ڸ� �Է��ϼ���: ";
		cin >> num1 >> num2;
		if (num2 == 0) cout << "0���� ���� �� �����ϴ�.";
		else
		{
			switch (operN) {
			case 1:
				cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
			case 2:
				cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
			case 3:
				cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
			case 4:
				cout << num1 << " / " << num2 << " = " << setprecision(4) <<static_cast<double>(num1) / num2 << endl;
			}
		}
	}
	else cout << "�߸��� �����Դϴ�." << endl;
	return 0;
}
