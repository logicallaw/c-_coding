#include <iostream>
using namespace std;

//�Ű����� x�� y�� ���� x�� y�� ��Ī��.
int& larger(int& x, int& y) {
	if (x > y)
		return x;
	else return y;
}
int main(void)
{
	int x = 5;
	int y = 16;

	int& r = larger(x, y); //���� y�� ���°���
	//r�� y�� ���� ��Ī
	cout << ++r << endl;
	cout << y << endl;

	int i = larger(x, y);
	//i�� y�� ���� ������ �ʱ�ȭ�ȴ�.
	cout << ++i << endl;
	cout << y << endl;

}