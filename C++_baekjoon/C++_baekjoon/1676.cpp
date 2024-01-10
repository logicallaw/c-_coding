#include <iostream>
using namespace std;

int main(void)
{
	int num;
	cin >> num;
	num -= num % 5;
	cout << num / 5;
}
/*
5
25
125
if(num>=1 && num <5)
	0

*/

/*
nÀÇ °ª 13 / 5 = 3

26 / 5 1
num -= (num % 5);
cout << num / 5
*/