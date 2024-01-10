#include <iostream>
using namespace std;
int main(void)
{
	int x;
	int y;

	cout << "할당 표현식의 리턴값: " << (x = 14) << endl;
	cout << "변수 x의 값: " << x << endl;

	cout << "할당 표현식의 리턴값: " << (x = 28) << endl;
	cout << "변수 y의 값: " << x << endl;

	return 0;
}