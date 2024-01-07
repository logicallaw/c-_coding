#include <iostream>
using namespace std;
int main(void) {
	bool flag = true;
	int score = 93;
	double average = 5.16;

	cout << "불 자료형의 변수: " << endl;
	cout << "크기: " << sizeof(flag) << endl;
	cout << "값: " << flag << endl;
	cout << "주소: " << &flag << endl;

	cout << "int 자료형 변수\n";
	cout << "크기: " << sizeof(score) << endl;
	cout << "값: " << score << endl;
	cout << "주소: " << &score << endl;

	cout << sizeof(average) << endl;
	cout << average << endl;
	cout << &average << endl;

	return 0;
}