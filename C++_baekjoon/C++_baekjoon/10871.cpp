#include <iostream>
using namespace std;
int main(void)
{
	int size, x;
	cin >> size >> x;
	int temp;
	for (int cnt{ 0 }; cnt < size; cnt++)
	{
		cin >> temp;
		if (temp < x)
		{
			cout << temp << " ";
		}
	}
	return 0;
}