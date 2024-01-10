#include <iostream>
//실수형인 원의 반지름 입력받고 원주율 3.14로 원의 넓이를 계산해 출력한다.
using namespace std;
int main(void)
{
	double a, b;
	b = 3.14;
	cout << "반지름의 길이를 입력해주세요: ";
	cin >> a;
	cout << "원의 넓이: " << (a * a * b) << endl;

	return 0;
}