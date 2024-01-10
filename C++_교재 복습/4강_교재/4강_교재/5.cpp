#include <iostream>
//세 정수 중 최댓값 구하기
using namespace std;
int main(void)
{
	int a, b, c;
	int maxN;

	cin >> a >> b >> c;

	maxN = max({ a, b, c , 100});

	cout << maxN << endl;

	return 0;
}