#include <iostream>
using namespace std;
int findMax(int* pa, int* pb);
int main(void) {
	int a, b;
	cout << "두 개의 정수를 입력하세요: ";
	cin >> a >> b;

	cout << "\n두 수 중 큰 값은 " << findMax(&a, &b) << "입니다.";
}
int findMax(int* pa, int* pb) { return (*pa >= *pb) ? *pa : *pb; }