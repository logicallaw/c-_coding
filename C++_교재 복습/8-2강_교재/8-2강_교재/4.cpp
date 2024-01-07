#include <iostream>
using namespace std;
int main(void)
{
	int a[5]{ 0 };
	for (const int& b : a)
		cout << b << " ";
	cout << endl;
	return 0;
}