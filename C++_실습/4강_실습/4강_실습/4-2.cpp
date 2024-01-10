#include <iostream>
using namespace std;
int main(void)
{
	int income, tax;
	const int limit1 = 10000000, limit2 = 50000000, limit3 = 100000000;
	double rate1 = 0.1, rate2 = 0.20, rate3 = 0.3;

	cout << "수입을 입력하세요: ";
	cin >> income;

	if (0 <= income && income <= limit1)
	{
		tax = income * rate1;
	}
	else if (limit1 < income && income <= limit2)
	{
		tax = limit1 * rate1 + (income - limit1) * rate2;
	}
	else if (limit2 < income && income <= limit3)
	{
		tax = limit1 * rate1 + (limit2 - limit1) * rate2 + (income - limit2) * rate2;
	}
	else
	{
		tax = income * rate3;
	}
	
	cout << "\n수입 = $" << income << endl;
	cout << "세금 = $" << tax << endl;

	return 0;
}