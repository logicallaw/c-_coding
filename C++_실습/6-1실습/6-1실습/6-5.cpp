/*
������ �������� �Է¹޴´�. ���� -100~100������ �������̴�.
�� �� x,y�� �Է¹޾Ҵٸ�   double result = sqrt(num)/num = pow(dott1,2)+pow(dott2,2)�� ����Ѵ�
�� ���� �������� �����ϴ� int randomDot()�Լ�
�Ÿ��� ����ϴ� double distance(int dot1, int dot2);
*/
#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

int randomDot();

int main(void)
{
	int x1, x2, y1, y2;
	srand(time(0));
	x1 = randomDot();
	x2 = randomDot();
	y1 = randomDot();
	y2 = randomDot();

	cout << "ù ��° ��: (" << x1 << ", " << y1 << ")" << endl;
	cout << "�� ��° ��: (" << x2 << ", " << y2 << ")" << endl;
	double result = sqrt(pow(x1 - y1, 2) + pow(x2 - y2, 2));
	cout << "�� �� ������ �Ÿ� : " << result << endl;
}

int randomDot()
{
	int x;
	x = rand() % 201 - 100;
	return x;
}