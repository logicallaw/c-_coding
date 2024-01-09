#include <iostream>
using namespace std;
int findMax(int* p1, int* p2);
int findMax(int* p1, int* p2) {
	if (*p1 >= *p2)
		return *p1;
	else
		return *p2;
}
int main(void) {
	cout << "두 개의 정수를 입력해 주세요: ";
	int a, b;
	cin >> a >> b;
	cout << "두 수 중 큰 값은 " << findMax(&a, &b) << "입니다.";

	return 0;
}