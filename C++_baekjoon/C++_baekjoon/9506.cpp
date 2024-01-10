#include <iostream>
using namespace std;
int main(void)
{
	int num;
	int numSum;
	while ((cin >> num) && (num != -1))
	{
		numSum;
		for (unsigned int cnt{ 1 }; cnt <= num; cnt++)
		{
			if (num % cnt == 0 && num != cnt)
			{
				numSum += cnt;
			}
		}
		if (numSum == num)
			cout << 
	}
}
