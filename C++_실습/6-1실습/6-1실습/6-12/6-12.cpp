/*
�ﰢ�� ���� ����ϴ� ���α׷��̴�.
����ڷκ��� �� ���� ������ �ڿ����� �Է¹޴´�.
unsigned int a,b,c;
double s = (a + b + c) / 2;
double result = sqrt(s*(s-a)*(s-b)*(s-c));

*/
#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
	double a, b, c;
	cout << "�ﰢ�� �� ���� ���̸� �Է��ϼ���: ";
	cin >> a >> b >> c;

	double s = (a + b + c) / 2;
	double result = sqrt(s * (s - a) * (s - b) * (s - c));

	cout << endl;
	cout << "����: " << result << endl;

	return 0;
}