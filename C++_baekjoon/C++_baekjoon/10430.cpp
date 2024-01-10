/*
세 수는 unsigned int형이다.
*/
#include <iostream>
using namespace std;
int main(void)
{
	unsigned int a, b, c;
	cin >> a >> b >> c;
	cout << (a + b) % c << endl;
	cout << ((a % c) + (b % c)) % c << endl;
	cout << (a * b) % c << endl;
	cout << ((a % c) * (b % c)) % c;

	return 0;
}