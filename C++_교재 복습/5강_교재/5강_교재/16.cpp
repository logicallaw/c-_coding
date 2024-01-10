#include <iostream>
using namespace std;
int main(void)
{
	for (int count{ 1 }; count <= 10; count++)
	{
		if (count == 5)
		{
			continue;
		}
		cout << count << " ";
	}
	cout << "\n³¡";
	return 0;
}