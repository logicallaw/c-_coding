/*
행과 열 unsigned int로 입력받는다.
논리
다음줄 넘어갈때마다 시작num+1로 다시 출력함.
시작넘버는 항상 1부터 시작함
줄 바뀜하면서 시작넘버 += 1

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

	cout << "행의 수를 입력하세요: ";
	cin >> row;
	cout << "열의 수를 입력하세요: ";
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