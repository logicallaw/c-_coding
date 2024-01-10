#include <iostream>
#include <bitset>
using namespace std;
int main(void)
{
	int a = -20000;
	unsigned int b = 1000;
	int c = 1000;

	cout << bitset<32>(a) << endl;
	cout << bitset<32>((double)a) << endl;
	cout << bitset<32>(b) << endl;
	cout << bitset<32>((double)a + b ) << endl;
	cout << (double)a + b << endl;

	/*
	11111111111111111011000111100000
	00000000000000000000001111101000


	11111111111111111011010111001000
	*/
	/*
	11111111111111111011000111100000
	00000000000000000000001111101000
	11111111111111111011010111001000
	*/

	return 0;
}