/*
* 
cout << x
cin >> x
cout << endl;
int nums[10];
for (int& r : nums)
	r = rand() % 21 + 10;
	cout << r << " ";

cout << endl;
bool boolA = 0;
for (int i{0} < 10)
	if (nums[i] == x)
		cout << i
		boolA = 1;
		break;
if (!boolA) cout << 존재X;
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(void)
{
	int x;
	int nums[10];
	int i = 0;

	srand(time(0));

	cout << "10~30 숫자 입력: ";
	cin >> x;

	cout << endl;
	for (int& r : nums)
	{
		r = rand() % 21 + 10;
		cout << r << " ";
	}
	for (; i < 10; i++)
	{
		if (nums[i] == x)
		{
			cout << "\nThe value was found at index: " << i;
			break;
		}
	}
	if (i == 10) cout << "\nThe value was not found.";

	return 0;
}