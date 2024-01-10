#include <iostream>
using namespace std;
void p1(int a  , int b  =2 );
int main(void)
{
	int x = 2, y = 0;
	p1(x);

	return 0;
}

void p1(int a , int b)
{
	cout << a << " " << b;
}