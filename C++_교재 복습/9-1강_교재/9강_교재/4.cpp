#include <iostream>
using namespace std;

//매개변수 x와 y는 원본 x와 y의 별칭임.
int& larger(int& x, int& y) {
	if (x > y)
		return x;
	else return y;
}
int main(void)
{
	int x = 5;
	int y = 16;

	int& r = larger(x, y); //변수 y가 오는거임
	//r은 y에 대한 별칭
	cout << ++r << endl;
	cout << y << endl;

	int i = larger(x, y);
	//i는 y의 값을 복사해 초기화된다.
	cout << ++i << endl;
	cout << y << endl;

}