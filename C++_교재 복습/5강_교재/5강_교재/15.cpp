/*
��� �� unsigned int�� �Է¹޴´�.
��
������ �Ѿ������ ����num+1�� �ٽ� �����.
���۳ѹ��� �׻� 1���� ������
�� �ٲ��ϸ鼭 ���۳ѹ� += 1

unsigned row, col;
unsigned startNum = 1;

for (unsigned int rowCnt = 0; rowCnt < row; rowCnt++)
{
	for (unsigned int colCnt = 1 + rowCnt; colCnt <= col; colCnt++)
	{
		cout << colCnt << " ";
	}
	cout << endl;
}
*/
#include <iostream>
using namespace std;
int main(void)
{
	unsigned row, col;

	cout << "���� ���� �Է��ϼ���: ";
	cin >> row;
	cout << "���� ���� �Է��ϼ���: ";
	cin >> col;

	for (unsigned int rowCnt = 0; rowCnt < row; rowCnt++)
	{
		for (unsigned int colCnt = rowCnt; (colCnt <= (col + rowCnt - 1)); colCnt++)
		{
			cout << colCnt << " ";
		}
		cout << endl;
	}
	return 0;
}