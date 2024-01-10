#include <iostream>
using namespace std;
int main(void)
{
	int size;
	int num;
	cin >> size >> num;
	int numMin = num, numMax = num;
	
	int temp;
	for (int cnt{ 1 }; cnt <= size -1; cnt++)
	{
		cin >> temp;
		numMin = (numMin <= temp) ? numMin : temp;
		numMax = (numMax >= temp) ? numMax : temp;
	}
	cout << numMin << " " << numMax;

	return 0;
}