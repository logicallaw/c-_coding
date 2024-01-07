#include <iostream>
#include "7-1_Account.h"
using namespace std;
int main(void)
{
	Account acc1{ 2000 };
	Account acc2{ 5000 };
	Account acc3{ 1000 };

	acc1.addBalance(1000);
	acc2.addBalance(0);
	acc3.addBalance(2000);
	acc1.withdraw(2000);
	acc2.withdraw(5000);
	acc3.withdraw(10000);

	return 0;
}