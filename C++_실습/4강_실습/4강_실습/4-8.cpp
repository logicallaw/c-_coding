#include <iostream>
using namespace std;
/*
int�� ���� �Է¹޴´�.
�������� ��� ���� ������ �Ǽ��� ����int�� ����Ѵ�.

���ǻ���
1.����� ������ �ƴ϶� �����̴�.
2.10.7%�� �Ҽ��� ��Ÿ���� 10.7�� �ƴ϶� ��ĭ �ű� 0.107���� �����ؾ���.
3.�������� ���ݻ��� 3���� ������ �ƴ϶� �׳� �������� ���°���.
*/
int main(void)
{
	int earnings;
	double incomes;

	cout << "������ �Է��ϼ���: ";
	cin >> earnings;
	incomes = (earnings - earnings*0.107) / 12.0;
	cout << "�Ǽ��� ����: " << static_cast<int>(incomes) << endl;

	return 0;

}