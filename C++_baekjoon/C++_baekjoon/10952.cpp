#include <iostream>
using namespace std;
int main(void)
{
	unsigned int a, b;
	cin >> a >> b;
	while (a && b)
	{
		cout << a + b << endl;
		cin >> a >> b;
	}
	return 0;
}