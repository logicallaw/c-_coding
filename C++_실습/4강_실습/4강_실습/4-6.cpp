#include <iostream>
using namespace std;
//�� double�� ����� �Է¹޴´�.
//�Ǳ��� ������ �Ǻ����� ����Ͽ� ���ϰ� ����Ѵ�.
int main(void)
{
	double a, b, c;
	unsigned int result;

	cout << "������������ ����� �Է����ּ���: ";
	cin >> a >> b >> c;

	result =(b*b-4*a*c)>0 ? 2 : ((b * b - 4 * a * c) == 0 ? 1 : 0);
	cout << "�Ǳ��� ����: " << result << "��" << endl;

	return 0;
}