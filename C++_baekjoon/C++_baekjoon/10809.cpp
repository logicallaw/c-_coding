#include <iostream>
using namespace std;
int main(void) {
	int nums[26];
	
	//default:-1
	for (int& num : nums)
		num = -1;

	string word;
	cin >> word;

	//nums배열에 처음 등장 위치i 저장
	for (int i{ 0 }; i < word.length(); i++) {
		//글자 하나를 추출하여 nums의 인덱스 번호로 바꾼다.
		char w = *(word.begin() + i) - 'a';
		//처음 등장시 위치i를 저장한다.
		if (nums[w] == -1)
			nums[w] = i;
	}

	for (int& num : nums)
		cout << num << " ";
	return 0;
}