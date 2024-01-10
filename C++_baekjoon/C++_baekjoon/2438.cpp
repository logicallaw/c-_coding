#include <iostream>
using namespace std;
int main(void)
{
	unsigned int size;
	cin >> size;
	for (unsigned int i{ 1 }; i <= size; i++)
	{
		for (unsigned int j{ 0 }; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}