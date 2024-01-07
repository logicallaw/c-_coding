#include <iostream>
using namespace std;
int main(void) {
	int a{ 5 };
	int* p{ &a };
	if (p)
		cout << "true1" << endl;

	p = nullptr;
	if (p)
		cout << "true2" << endl;
}