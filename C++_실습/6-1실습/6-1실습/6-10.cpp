/*
0�� �ƴ� �� ������ �Է¹޴´�.
�� ���� ����ϴ� ���α׷��̴�.
main()�Լ����� �� ���� ����Ѵ�. - reference���
void calculateRoot() ���� ����ϴ� �Լ��̴�.
(�Ű������� ���������� �ʴ�.)
(�� ���� ����� calculateRoot�Լ����� ����ǰ�

main()
	int a, b, c;
	double x1, x2;
	bool p = 0

	if (p) //���� ����
		cout << x1, x2
	else 
		cout << �Ǳ��� ����.
		cout << x1, x2
		

void calculateRoot(int a, int b, int c, double& x1, double& x2, bool& p)
//�Ǻ����� ������ ���� �����ϸ� ��� ����
//���� �������� ������ ��� ���� ����.
//���ϰ��� ��� �����ؼ� ���� �����ؾߵ�. - x1, x2;	
	double temp;
	temp = pow(b,2) - (4 * a * c);
	x1 = (-b + sqrt(temp)) / (2 * a);
	x2 = (-b - sqrt(temp)) / (2 * a);
	if (temp >= 0) p = 1;
*/
#include <iostream>
#include <cmath>
using namespace std;

void calculateRoot(int a, int b, int c, long double& x1, long double& x2, bool& p);

int main(void)
{
	int a, b, c;
	long double x1, x2;
	bool p = 0;

	cout << "��� a, b, c�� �Է��ϼ���: ";
	cin >> a >> b >> c;
	calculateRoot(a, b, c, x1, x2, p);

	if (!p) cout << "�Ǳ��� �����ϴ�!" << endl;
	cout << "������������ �� ��: " << x1 << ", " << x2 << endl;

	return 0;
}

void calculateRoot(int a, int b, int c, long double& x1, long double& x2, bool& p)
{
	long double temp;
	temp = pow(b, 2) - (4 * a * c);
	x1 = (-b + sqrt(temp)) / (2 * a);
	x2 = (-b - sqrt(temp)) / (2 * a);
	if (temp >= 0) p = 1;
}