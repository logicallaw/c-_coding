/*
unsigned int ��� �� �Է¹޴´�.
*����ϴµ� ���Ǽ��� �Ǹ� �����ٷ� �ѱ��
���� ����ŭ for���� ����
*/
#include <iostream>
using namespace std;
int main(void)
{
	unsigned int row, col;
	unsigned int colCnt = 0;
	cout << "���� ���� �Է��ϼ���: ";
	cin >> row;
	cout << "���� ���� �Է��ϼ���: ";
	cin >> col;
	for (unsigned int rowCnt = 0; rowCnt < row; rowCnt++)
	{
		do
		{
			cout << "*";
			colCnt += 1;
		} while (colCnt < col);
		cout << endl;
		colCnt = 0;
	}
	return 0;
}