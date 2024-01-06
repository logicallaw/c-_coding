#include <iostream>
#include <array>
using namespace std;
int main(void) {
	array<int, 10> nums;
	cout << "등비수열과 첫항과 공비를 입력해주세요: ";
	int a, s;
	cin >> a >> s;
	nums[0] = a;
	for (int i{ 1 }; i < 10; i++)
		nums[i] = s * nums[i - 1];
	cout << "확인할 수열의 항을 입력해 주세요: ";
	int index;
	cin >> index;
	cout << "\n" << index << "번째 항은 " << nums[index - 1] << "입니다.";

	return 0;
}