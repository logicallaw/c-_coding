#include <iostream>
//�� ���� �� �ִ� ���ϱ�
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