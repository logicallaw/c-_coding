#include <iostream>
#include <array>
using namespace std;
int main(void)
{
	array<int, 6> arr{};
	for (const int e : arr)
		cout << e << " ";
	return 0;
}