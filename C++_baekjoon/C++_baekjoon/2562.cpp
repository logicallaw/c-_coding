#include <iostream>
using namespace std;
int main(void)
{
	unsigned int temp, num, numMax = 1;
	for (unsigned int cnt{ 1 }; cnt <= 9; cnt++)
	{
		cin >> temp;
		if (numMax <= temp)
		{
			numMax = temp;
			num = cnt;
		}
	}
	cout << numMax << endl << num;
	return 0;
}
