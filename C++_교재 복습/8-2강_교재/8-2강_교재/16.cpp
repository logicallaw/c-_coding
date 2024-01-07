#include <iostream>
using namespace std;
int main(void)
{
	int ary[5][3] = { {1,2,3},{},{}, {}, {} };
	for (size_t i{ 0 }; i < 5; i++)
	{
		for (size_t j{ 0 }; j < 3; j++)
		{
			cout << ary[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}