#include <iostream>
//�� int�� ������ �Է¹޴´�.
//�� ������ ���ؼ� A�� B�� ��Ұ��踦 ����Ѵ�.
using namespace std;

int main(void)
{
	int a, b;
	cin >> a >> b;
	cout << ((a > b) ? ">" : ((a < b) ? "<" : "=="));
	return 0;

}