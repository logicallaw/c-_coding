#include <iostream>
//�Ǽ��� ����, ������ �����Ѵ�.
using namespace std;
int main(void)
{
	double a, b;
	cout << "a�� b�� �Է����ּ���: ";
	cin >> a >> b;
	cout << fixed;
	cout.precision(2);
	cout << "a + b = " << a + b << endl;
	cout << "a - b = " << a - b << endl;

	return 0;

}