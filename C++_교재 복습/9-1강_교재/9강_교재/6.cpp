#include <iostream>
using namespace std;
int* larger(int* x, int* y) {
	if (*x > *y)
		return x;
	else return y;
}
int main(void) {
	int x = 5;
	int y = 10;
	int* r = larger(&x, &y); //y�� �ּҸ� �޴´�.
	cout << (*r)++ << endl;
	cout << y << endl;
	int i = *(larger(&x, &y));
	cout << i << endl;
	//*r++; //����ǥ��� ���� ����ż� r�� �ּҸ� �����ϰ� 1�� ������Ų��. ���� r�� ���� �������ε� �����ϱ� �����Ⱚ ���´�.


}