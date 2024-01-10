#include <iostream>
//철수와 영희로부터 각각 양수인 사과의 개수 입력받고 총합과 가격을 계산해 출력한다.
using namespace std;
int main(void)
{
	unsigned int a, b;
	cout << "철수가 가지고 있는 사과의 수를 입력하세요: ";
	cin >> a;
	cout << "영희가 가지고 있는 사과의 수를 입력하세요: ";
	cin >> b;

	cout << endl;
	cout << "철수와 영희가 가지고 있는 사과의 총합은 " << a + b << "개입니다." << endl;
	cout << "사과의 총 가격은 " << (3000 * (a + b)) << "원 입니다." << endl;

	return 0;
}