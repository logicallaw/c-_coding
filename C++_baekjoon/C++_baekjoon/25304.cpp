/*
총 네번의 입력


int main(void)
unsigned int total, size, a, b;
int prices = 0;

cin >> totoal;
cin >> size;


for (unsigned int cnt {0}; cnt < size; cnt++)
	cin >> a >> b;
	prices += a * b;

if (price == total) cout << "Yes"
else cout << "No"

*/
#include <iostream>
using namespace std;
int main(void)
{
	unsigned int receiptNum, size, num1, num2;
	unsigned int numSum = 0;

	cin >> receiptNum;
	cin >> size;

	for (unsigned int cnt{ 0 }; cnt < size; cnt++)
	{
		cin >> num1 >> num2;
		numSum += num1 * num2;
	}
	if (receiptNum == numSum)
		cout << "Yes";
	else
		cout << "No";

	return 0;
}