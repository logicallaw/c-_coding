/*
���� �����ϴ� ���簢���� ���� ���α׷�
double���� �ƴ� �Ǽ��� �Է¹޾� ���� ���̸� �����Ѵ�.
���ǳ��̷� ������ ���ϴ� �Լ� getRadius �����Ѵ�.
(�Ҽ��� �Ʒ� ��°�ڸ�����)
(pi=3.14)
������ ���ϸ�  4r�����ϸ� ���簢�� ���� �ȴ�.
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double getRadius(double getArea);

int main(void)
{
	double num;
	double radius;
	double result;

	cout << "���� ���̸� �Է��ϼ���: ";
	cin >> num;
	radius = getRadius(num);
	result = pow(2 * radius,2);
	cout << "���� �����ϴ� ���簢���� ����: " << fixed << setprecision(3) << result << endl;

	return 0;
}

double getRadius(double getArea)
{
	return sqrt(getArea / 3.14);
}