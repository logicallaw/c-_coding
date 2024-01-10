#include <iostream>
using namespace std;
int main(void)
{
	unsigned int size;
	unsigned int a, b;
	cin >> size;
	for (unsigned int cnt{ 1 }; cnt <= size; cnt++)
	{
		cin >> a >> b;
		cout << "Case #" << cnt << ": " << a << " + " << b << " = " << a + b << endl;
	}

	return 0;
}