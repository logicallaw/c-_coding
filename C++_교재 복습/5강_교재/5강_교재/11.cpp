#include <iostream>
#include <iomanip>
using namespace std;
/*
ī���ͺ���
7�� ��� ���
1���� 300����
���ٿ� 10������ ���
*/
int main(void)
{
	unsigned int num;
	unsigned int e=0;
	cout << "���� ������ �Է����ּ���: ";
	cin >> num;

	for (unsigned int cnt = 1; cnt < 300; cnt++)
	{
		if (cnt % num == 0)
		{
			cout << setw(4) << right << cnt;
			e++; //e += 1 or ++e ����
			if (e == 10)
			{
				cout << endl;
				e = 0;
			}
		}
	}
	return 0;
}