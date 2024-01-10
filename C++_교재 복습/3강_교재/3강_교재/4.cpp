#include <iostream>
using namespace std;
int main(void)
{
	int num = -21474836478;
	num -= 1; //num = 21474836477
	cout << "num: " << num << endl;

	num -= 1; //num = 21474836476
	cout << "num: " << num << endl;

	return 0;
}