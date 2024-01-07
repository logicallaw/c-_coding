#include <iostream>
using namespace std;
int main(void)
{
	const int SIZE = 10;
	int nums[SIZE];
	int cnt;
	cout << "숫자의 개수를 입력해주세요: ";
	cin >> cnt;
	cout << cnt << "개의 숫자를 입력해 주세요: ";
	
	for (int i{ 0 }; i < cnt; i++)
	{
		cin >> nums[i];
	}

	cout << endl << "입력받은 숫자들 중에 3의 배수는 다음과 같습니다: ";

	for (int i{ 0 }; i < cnt; i++)
	{
		if (nums[i] % 3 == 0) cout << nums[i] << " ";
	}
	return 0;
}