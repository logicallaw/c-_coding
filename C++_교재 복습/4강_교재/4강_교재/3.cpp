#include <iostream>
using namespace std;
int main(void)
{
	char grade;
	cout << "학점을 입력하세요(A,B,C,D,F): ";
	cin >> grade;
	
	switch (grade) {
	case 'A':
		cout << "A";
	case 'B':
		cout << "B";
	case 'C':
		cout << "C";
		cout << "pass입니다.";
		break;
	case 'D':
	case 'F':
		cout << "fail입니다.";
		break;
	default:
		cout << "입력 오류입니다. 다시 시도하세요.";
	}
	cout << endl;
	return 0;
}