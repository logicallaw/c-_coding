#include <iostream>
using namespace std;
int findMax(int* pa, int* pb);
int main(void) {
	int a, b;
	cout << "�� ���� ������ �Է��ϼ���: ";
	cin >> a >> b;

	cout << "\n�� �� �� ū ���� " << findMax(&a, &b) << "�Դϴ�.";
}
int findMax(int* pa, int* pb) { return (*pa >= *pb) ? *pa : *pb; }