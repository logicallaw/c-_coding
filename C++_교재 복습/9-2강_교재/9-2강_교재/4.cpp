#include <iostream>
using namespace std;
int main(void) {
	int arr[2][3]{ 1,2,3,4,5,6 };
	int(*pArr)[3] = arr;
	cout << pArr[0][1] << endl;

	for (int* p : arr)
	{
		for (int i{ 0 }; i < 3; i++)
			cout << p[i] << " ";
		cout << endl;
	}

}