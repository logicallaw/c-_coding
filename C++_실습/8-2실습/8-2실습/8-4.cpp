#include <iostream>
using namespace std;
bool process(int param[3][3]);
bool process(int param[3][3]) {
	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;
	for (int i{ 0 }; i < 3; i++)
	{
		for (int j{ 0 }; j < 3; j++)
		{
			sum1 += param[i][j];
			sum2 += param[j][i];
		}
		if (sum1 != 15 || sum2 != 15)
			return 0; //실패
		else
		{
			sum1 = 0;
			sum2 = 0;
		}
		sum3 += param[i][i];
	}
	if (sum3 != 15)
		return 0;
	else
		return 1;
}

int main(void) {
	int nums[3][3];
	for (int i{ 0 }; i < 3; i++)
	{
		for (int j{ 0 }; j < 3; j++)
		{
			cin >> nums[i][j];
		}
	}
	bool boolA = process(nums);
	if (boolA)
		cout << "\n마방자입니다.";
	else
		cout << "\n마방자가 아닙니다.";
	//2 7 6 9 5 1 4 3 8
}