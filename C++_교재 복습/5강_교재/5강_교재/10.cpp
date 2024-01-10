#include <iostream>
using namespace std;
/*
int형 정수 입력
0부터 입력된 정수-1까지 공백으로 구분하여 한줄에 출력
*/
int main(void)
{
	int numInt;
	cout << "출력할 정수를 입력하세요: ";
	cin >> numInt;

	//unsigned int cnt{0} or cnt (0) or cnt = (0) or cnt = {0}
	for (unsigned int cnt{ 0 }; cnt < numInt; cnt++)
	{
		cout << cnt << " ";
	}
	return 0;
}