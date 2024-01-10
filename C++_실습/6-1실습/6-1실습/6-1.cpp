/*
int형 세 정수를 입력받는다.
가장 큰값을 찾아 리턴하는 maximum함수를 정의한다.

int maximum(int x, int y, int z);

int maximum(int x, int y, int z)
{
	int numMax;
	numMax = (x >= y) ? x : y;
	numMax = (numMax >= z) ? numMax : z;
	return numMax;
}
*/
#include <iostream>
using namespace std;
int maximum(int x, int y, int z);
int main(void)
{
	int num1, num2, num3;
	cout << "Enter three integer values: ";
	cin >> num1 >> num2 >> num3;

	cout << "The maximum integer value is: " << (maximum(num1, num2, num3)) << endl;

	return 0;
}

int maximum(int x, int y, int z)
{
	int numMax;
	numMax = (x >= y) ? x : y;
	numMax = (numMax >= z) ? numMax : z;
	return numMax;
}