#include <iostream>
//사과를 균등하게 분배하는 프로그램이다.
//사과의 개수(양의 정수)와 사람의 수(양의 정수)를 입력받는다.
using namespace std;
int main(void)
{
	unsigned int apple, people;
	cout << "사과의 개수를 입력해주세요: ";
	cin >> apple;
	cout << "사람의 수를 입력해주세요: ";
	cin >> people;

	cout << "모든 사람은 최소 " << apple / people << "개의 사과를 가져갈 수 있습니다." << endl;

	return 0;
}