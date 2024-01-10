#include <iostream>
using namespace std;
int main(void)
{
	int a = 5;
	double b = 3.0;
	cout << typeid(a).name() << endl;
	cout << typeid(b).name() << endl;

	return 0;
}