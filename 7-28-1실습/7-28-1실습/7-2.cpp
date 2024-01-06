#include <iostream>
using namespace std;
int main(void)
{
	
	int size, temp;
	int ary[10];
	cout << "크기를 입력하세요(1~10) : ";
	cin >> size;

	cout << endl <<size << "개의 숫자를 입력하세요: ";
	for (int i{ 0 }; i < size; i++)
	{
		cin >> temp;
		ary[i] = temp;
	}

	cout << "입력한 숫자들을 거꾸로 출력: ";
	for (int i{ size - 1 }; i >= 0; i--)
		cout << ary[i] << "   ";
	return 0;
}