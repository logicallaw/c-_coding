#include <iostream>
using namespace std;
void dec2Bin(int n);

int main() {
	int n;
	cout << "양의 정수를 입력하세요: ";
	cin >> n;
	cout << n << "의 이진수 표현: ";
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