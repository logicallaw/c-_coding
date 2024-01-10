#include <iostream>
using namespace std;
int main(void)
{
	unsigned int total(0);

	for (unsigned int number(2); number <= 20; number += 2) {
		cout << "ÇöÀç number: " << number << endl;
		total += number;
	}
	cout << "Sum is " << total << endl;

	return 0;
}