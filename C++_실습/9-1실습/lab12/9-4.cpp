#include <iostream>
using namespace std;
int main(void)
{
	int a, b;
	cout << "a�� b�� �ʱⰪ�� �Է��� �ּ���: ";
	cin >> a >> b;

	int* pa = &a;
	int* pb = &b;

	*pa += 3;
	*pb += 3;

	cout << "a:" << *pa << " b:" << *pb << endl;

	int** ppa = &pa;
	int** ppb = &pb;

	*(*ppa) += 10;
	*(*ppb) += 20;

	cout << "a:" << *(*ppa) << " b:" << *(*ppb);
	
}