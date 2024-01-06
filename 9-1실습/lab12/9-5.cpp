#include <iostream>
using namespace std;
/*
기약분수는 최대공약수로 나눈다
두수 a와 b를 입력받아 최대공약수 int형을 리턴한다.
a와 b를 최대공약수로 각각 나누어 출력한다.
이때, 포인터로 인수 받아서 값을 바꾼다.
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
	cout << "분자와 분모를 입력해 주세요: ";
	cin >> a >> b;
	func(&a, &b);
	cout << "기약분수는 " << a << "/" << b << "입니다.";

	return 0;
}