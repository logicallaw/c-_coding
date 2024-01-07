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
	int* r = larger(&x, &y); //y의 주소를 받는다.
	cout << (*r)++ << endl;
	cout << y << endl;
	int i = *(larger(&x, &y));
	cout << i << endl;
	//*r++; //후위표기는 먼저 연산돼서 r의 주소를 리턴하고 1을 증가시킨다. 변수 r에 대한 역참조인데 없으니까 쓰레기값 나온다.


}