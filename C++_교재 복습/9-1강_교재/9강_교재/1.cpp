#include <iostream>
using namespace std;
int main(void) {
	bool flag = true;
	int score = 93;
	double average = 5.16;

	cout << "�� �ڷ����� ����: " << endl;
	cout << "ũ��: " << sizeof(flag) << endl;
	cout << "��: " << flag << endl;
	cout << "�ּ�: " << &flag << endl;

	cout << "int �ڷ��� ����\n";
	cout << "ũ��: " << sizeof(score) << endl;
	cout << "��: " << score << endl;
	cout << "�ּ�: " << &score << endl;

	cout << sizeof(average) << endl;
	cout << average << endl;
	cout << &average << endl;

	return 0;
}