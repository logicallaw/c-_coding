//built-in-array
#include <iostream>
using namespace std;
int main(void) {
	int nums[10]{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
	int counter = 0;
	int inputNum;
	int remainder;
	bool pass;

	for (int i{ 0 }; i < 10; i++)
	{
		pass = 1;
		cin >> inputNum;
		remainder = inputNum % 42;
		//중복 검사
		for (int j{ 0 }; j < counter; j++)
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
			nums[counter++] = remainder;
	}

	cout << counter;
	return 0;
}