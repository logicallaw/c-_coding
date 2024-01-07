#include <iostream>
#include <array>
using namespace std;
void func1();
void func1() {
	array<int, 5> arr;
	for (const int e : arr)
		cout << e << " ";
}
int main(void)
{
	func1();
	return 0;
}