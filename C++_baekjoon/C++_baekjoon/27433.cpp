#include <iostream>
using namespace std;
long long f(int num);
int main(void)
{
	int num;
	cin >> num;
	cout << f(num);
	return 0;
}
long long f(int num)
{
	if (num == 0 || num == 1 ) return 1;
	else return num * f(num - 1);
}