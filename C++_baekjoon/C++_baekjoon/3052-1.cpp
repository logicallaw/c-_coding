//vector
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
	vector<int> nums;
	int inputNum;
	int remainder;
	bool pass;

	for (int i{ 0 }; i < 10; i++)
	{
		pass = 1;
		cin >> inputNum;
		remainder = inputNum % 42;
		//중복 검사
		for (int j{ 0 }; j < nums.size(); j++)
		{
			if (remainder == nums[j])
			{
				//중복은 더이상 검사 안한다.
				pass = 0;
				break;
			}
		}
		//중복 검사에서 무사히 통과하면 새로운 값으로 받아들인다.
		if (pass)
			nums.push_back(remainder);
	}

	cout << nums.size();
	return 0;
}