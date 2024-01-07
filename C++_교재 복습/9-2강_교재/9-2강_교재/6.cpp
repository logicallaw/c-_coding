#include <iostream>
using namespace std;

int sum(int a, int b);
int input();

int main(void) {
	int (*p1)(int, int) { sum };
	cout << p1(5, 16) << endl;
	cout << (*p1)(5, 16) << endl;
}
int sum(int a, int b) {
	return a + b;
}
int input() {
	int input;
	cout << "Input: ";
	cin >> input;
	return input;
}