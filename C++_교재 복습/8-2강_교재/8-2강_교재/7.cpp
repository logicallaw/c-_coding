#include <iostream>
#include <array>
using namespace std;
int main(void)
{
	array<int, 5> arr{ 1,2,3,4,5 };
	try {
		cout << arr.at(5) << endl;
	}
	catch (const out_of_range& e)
	{
		cout << e.what() << endl;
	}
}