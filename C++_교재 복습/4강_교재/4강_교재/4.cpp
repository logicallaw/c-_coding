#include <iostream>
using namespace std;
int main(void)
{
	char c = 'A';
	cout << static_cast<int>(c) << endl;

	switch (c) {
	case 'A':
		cout << 'A' << endl;
		break;
	case 97:
		cout << "a" << endl;
		break;
	}

	return 0;

}