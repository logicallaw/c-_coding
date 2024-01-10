#include <iostream>
using namespace std;
int main(void)
{
	unsigned int n, k, counter = 0;
	cin >> n >> k;
	for (unsigned int cnt{ 1 }; cnt <= n; cnt++)
	{
		if (n % cnt == 0)
			counter++;
		if (counter == k)
		{
			cout << cnt;
			break;
		}
	}
	if (counter != k)
		cout << 0;
	return 0;
}