#include <iostream>
#include <cstring>
using namespace std;
char* getInput() {
	char* temp = new char[100];
	cin.getline(temp, 100);
	return temp;
}
int main(void) {
	cout << "���ڿ��� �Է��ϼ���: ";
	char* input = getInput();
	cout << "�Է��� ���ڿ�: " << input << endl;

	delete[] input;
}