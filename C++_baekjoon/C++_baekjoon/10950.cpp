#include <iostream>
using namespace std;
int main(void)
{
	int size, a, b;
	int counter = 0;
	cin >> size;
	do
	{
		cin >> a >> b;
		cout << a + b << endl;
		counter++;
	} while (counter < size);
	return 0;
}