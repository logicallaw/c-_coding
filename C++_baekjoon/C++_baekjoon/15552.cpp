#include <iostream>
using namespace std;
int main(void)
{
	int size, a, b;
	cin >> size;
	for (int cnt{ 0 }; cnt < size; cnt++)
	{
		cin.tie(NULL);
		cin.sync_with_stdio(false);
		cin >> a >> b;
		cout << a + b << "\n";
	}
	return 0;
}