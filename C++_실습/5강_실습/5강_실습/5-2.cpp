/*
int���� num �Է¹޴´�.
(�̶�, ���� �Է� ������ do~while�� ó��)

num=0:0! = 1
num!=0:while�� ����
unsigned int cnt=0
int numP=1;
while (cnt<num)
	numP *= (++cnt)
cout << num << "! = " << numP << endl;
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
	int num;
	int cnt = 0;
	long long result = 1;
	do
	{
		cout << "���丮���� ũ�⸦ ������ �ƴ� ������ �Է��ϼ���: ";
		cin >> num;
	} while (num < 0);

	//��
	if (num)
	{
		while (cnt < num)
		{
			result *= (++cnt);
		}
	}
	cout << "\n" << num << "! = " << result << endl;

	return 0;
}