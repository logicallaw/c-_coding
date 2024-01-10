#include <iostream>
using namespace std;
int gcd(int first, int second);

int main(void)
{
	cout << "gcd(8, 6) = " << gcd(8, 6) << endl;
	cout << "gcd(9, 12) = " << gcd(9, 12) << endl;
	cout << "gcd(7, 11) = " << gcd(7, 11) << endl;
	cout << "gcd(21, 35) = " << gcd(21, 35) << endl;
	cout << "gcd(140, 12) = " << gcd(140, 12) << endl;

	return 0;
}

int gcd(int first, int second)
{
	if (second == 0)
	{
		return first;
	}
	else
	{
		return gcd(second, first % second);
	}
}