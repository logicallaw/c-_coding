#include <iostream>
using namespace std;
int main(void)
{
	int num = 2147483647;

	num += 1; //num = -2147483648
	cout << "num: " << num << endl;

	num += 1; //num = -2147483647
	cout << "num: " << num << endl;

	return 0;
}