#include <iostream>
using namespace std;
int main(void) {
	int nums[26];
	
	//default:-1
	for (int& num : nums)
		num = -1;

	string word;
	cin >> word;

	//nums�迭�� ó�� ���� ��ġi ����
	for (int i{ 0 }; i < word.length(); i++) {
		//���� �ϳ��� �����Ͽ� nums�� �ε��� ��ȣ�� �ٲ۴�.
		char w = *(word.begin() + i) - 'a';
		//ó�� ����� ��ġi�� �����Ѵ�.
		if (nums[w] == -1)
			nums[w] = i;
	}

	for (int& num : nums)
		cout << num << " ";
	return 0;
}