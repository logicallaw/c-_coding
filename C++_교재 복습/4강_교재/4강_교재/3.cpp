#include <iostream>
using namespace std;
int main(void)
{
	char grade;
	cout << "������ �Է��ϼ���(A,B,C,D,F): ";
	cin >> grade;
	
	switch (grade) {
	case 'A':
		cout << "A";
	case 'B':
		cout << "B";
	case 'C':
		cout << "C";
		cout << "pass�Դϴ�.";
		break;
	case 'D':
	case 'F':
		cout << "fail�Դϴ�.";
		break;
	default:
		cout << "�Է� �����Դϴ�. �ٽ� �õ��ϼ���.";
	}
	cout << endl;
	return 0;
}