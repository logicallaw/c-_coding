/*
�������� ����Ѵ�.
���ٿ� 3���� ����ϰ� ���� ������ �Ѿ �� �� ���� ����Ѵ�.
9by9���
for (i=2~9
	for (j=1~9
		cout <<  << i*j
		if (j%3==0)
			cout << endl;
	cout << endl;
ixj
*/
#include <iostream>
using namespace std;
int main(void)
{
	for (unsigned int i{ 2 }; i <= 9; i++)
	{
		for (unsigned int j{ 1 }; j <= 9; j++)
		{
			cout << i << "X" << j << "=" << i * j << " ";
			if (j % 3 == 0)
			{
				cout << endl;
			}
		}
		cout << endl;
	}
	return 0;
}