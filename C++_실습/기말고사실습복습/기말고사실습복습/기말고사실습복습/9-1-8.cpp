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
	cout << "�� ���� ������ �Է��� �ּ���: ";
	int a, b;
	cin >> a >> b;
	cout << "�� �� �� ū ���� " << findMax(&a, &b) << "�Դϴ�.";

	return 0;
}