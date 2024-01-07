//vector
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
	int size;
	int inputNumber;
	int findNumber;
	int counter = 0;

	vector<int> nums;

	cin >> size;

	for (int i{ 0 }; i < size; i++)
	{
		cin >> inputNumber;
		nums.push_back(inputNumber);
	}

	cin >> findNumber;

	for (int i{ 0 }; i < nums.size(); i++)
		if (nums[i] == findNumber)
			counter++;

	cout << counter;
	return 0;
}