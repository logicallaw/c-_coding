#include <iostream>
using namespace std;
int main(void)
{
	unsigned int n;
	unsigned int result = 0;
	unsigned int counter = 1;
	cin >> n;
	do
	{
		result += counter;
		counter++;
	} while (counter <= n);
	cout << result << endl;

	return 0;
}