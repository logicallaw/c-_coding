#include <iostream>
using namespace std;
/*
���м��� �ִ������� ������
�μ� a�� b�� �Է¹޾� �ִ����� int���� �����Ѵ�.
a�� b�� �ִ������� ���� ������ ����Ѵ�.
�̶�, �����ͷ� �μ� �޾Ƽ� ���� �ٲ۴�.
*/
int gcd(int a, int b);
void func(int* pa, int* pb);

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}

void func(int* pa, int* pb) {
	int temp = gcd(*pa, *pb);
	*pa /= temp;
	*pb /= temp;
}

int main(void) {
	int a, b;
	cout << "���ڿ� �и� �Է��� �ּ���: ";
	cin >> a >> b;
	func(&a, &b);
	cout << "���м��� " << a << "/" << b << "�Դϴ�.";

	return 0;
}