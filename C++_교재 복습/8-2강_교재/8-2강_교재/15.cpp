#include <iostream>
using namespace std;
//built-in array�� pass-by-reference�� �� ������ ��� �ȴ�.
//�ٸ�, array �迭�� �� �����ڰ� �־�� ���� ����ȴ�.
//array�� �迭ũ��(size)�� ������, built-in array�� �迭ũ�Ⱑ ���
//�μ��� ���޹޾ƾ��Ѵ�.
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