#include <iostream>

using namespace std;
int main(void)
{
	int a = 20;
	const int CONST_INT = 2;
	cout << a / 2 << endl;

	switch (a / 2)
	{
	case 1:
		cout << "1" << endl;
		break;
	case CONST_INT:
		cout << "2" << endl;
		break;
	case '\n':
		cout << "\\n" << endl;
		break;
	default:
		cout << "default" << endl;

	}
	return 0;
}