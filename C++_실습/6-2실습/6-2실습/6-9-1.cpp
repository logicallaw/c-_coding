#include <iostream>
using namespace std;
void dec2Bin(int n);

int main() {
	int n;
	cout << "���� ������ �Է��ϼ���: ";
	cin >> n;
	cout << n << "�� ������ ǥ��: ";
	dec2Bin(n);
	cout << endl;
}

void dec2Bin(int n)
{
	if (n > 1)
	{
		dec2Bin(n / 2);
	}
	cout << n % 2;
}