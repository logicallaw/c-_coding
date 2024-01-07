//array
#include <iostream>
#include <array>
using namespace std;
int main(void) {
	int size;
	int findNumber;
	int counter = 0;

	array<int, 100> nums;
	
	cin >> size;

	for (int i{ 0 }; i < size; i++)
		cin >> nums[i];

	cin >> findNumber;

	for (int i{ 0 }; i < size; i++)
		if (nums[i] == findNumber)
			counter++;

	cout << counter;
	return 0;

	
}