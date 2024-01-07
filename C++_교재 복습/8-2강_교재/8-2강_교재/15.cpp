#include <iostream>
using namespace std;
//built-in array는 pass-by-reference할 때 참조자 없어도 된다.
//다만, array 배열은 꼭 참조자가 있어야 값이 변경된다.
//array는 배열크기(size)가 있지만, built-in array는 배열크기가 없어서
//인수로 전달받아야한다.
void print(int ary[], int size) {
	for (int i{ 0 }; i < size; i++)
		ary[i] += 1;
}
int main(void)
{
	const int SIZE = 5;
	int a[SIZE]{1,1,1,1,1};
	print(a, SIZE);

	for (int e : a) cout << e << " ";
	return 0;
}