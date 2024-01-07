#include <iostream>
#include <array>
using namespace std;

void staticArrayInit();
void print(const array<int, 3>& arr);
int main(void) {
	staticArrayInit();
	//array<int, 3> arr{};
	//print(arr);

	return 0;
}
void print(const array<int, 3>& arr) {
	for (const int& a : arr)
		cout << a << " ";
	cout << endl;
}
void staticArrayInit() {
	static array<int, 3> arr;
	for (const int& a : arr)
		cout << a << " ";
	cout << endl;
}