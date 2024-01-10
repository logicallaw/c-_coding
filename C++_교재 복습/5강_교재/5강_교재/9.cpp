#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(void)
{
	cout << fixed << setprecision(2);

	double principal{ 1000.00 };
	double rate{ 0.05 };

	cout << "initial principal: " << principal << endl;
	cout << "\tinterest rate: " << rate << endl;

	cout << "\nYear" << setw(20) << "Amount on deposit" << endl;

	for (unsigned int year{ 1 }; year <= 10; year++)
	{
		double amount = principal * pow(1.0 + rate, year);
		cout << setw(4) << year << setw(20) << amount << endl;
	}
	return 0;
}