/*
unsigned int 행과 열 입력받는다.
*출력하는데 열의수가 되면 다음줄로 넘기고
행의 수만큼 for문을 실행
*/
#include <iostream>
using namespace std;
int main(void)
{
	unsigned int row, col;
	unsigned int colCnt = 0;
	cout << "행의 수를 입력하세요: ";
	cin >> row;
	cout << "열의 수를 입력하세요: ";
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