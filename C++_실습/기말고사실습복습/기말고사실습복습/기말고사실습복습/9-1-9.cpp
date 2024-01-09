#include <iostream>
#include <string>
using namespace std;
int main(void) {
	string numbers;
	cout << "숫자로 구성된 문자열을 입력하세요: ";
	cin >> numbers;

	int nums[10]{-1,-1,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 };
	for (int i{ 0 }; i < numbers.length(); i++) {
		int idx = *(numbers.begin() + i) - '0';
		if (nums[idx] == -1)
		{
			nums[idx] = i;
		}
	}
	for (int i{ 0 }; i < 10; i++)
		cout << "숫자 " << i << "의 등장 위치: " << nums[i] << endl;
	return 0;
}