#include <iostream>
using namespace std;

int combination(int n, int m);

int main(void)
{
	int x, y;

	cout << "n Combination m: ";
	cin >> x >> y;
	
	cout << x << "C" << y << ": " << combination(x, y) << endl;

	return 0;
}

int combination(int n, int m)
{
	if (m == 0) return 1; 
	else if (n == m) return 1;
	else return combination(n - 1, m - 1) + combination(n - 1, m);
}