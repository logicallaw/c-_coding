/*
�ŵ����� ��� ���α׷�
������ �ذ� ������ �Է¹޴´�.
���� ����, ������ ���̾ƴ� ����
����Լ��� �ۼ�,�ݺ��� ��� ���Ѵ�.

int n, m;
func1(n, m)
	if m == 0 return 1;
	else return n * func1(n, m-1);
*/
#include <iostream>
using namespace std;
int func1(int x, int y);
int main(void)
{
	int n, m;
	cout << "�ذ� ������ �Է��� �ּ���: ";
	cin >> n >> m;
	int result = func1(n, m);

	cout << n << "�� " << m << "������ " << result << "�Դϴ�." << endl;

	return 0;
}

int func1(int x, int y)
{
	if (y == 0) return 1;
	else return x * func1(x, y - 1);
}