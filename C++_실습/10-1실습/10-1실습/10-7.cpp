#include <iostream>
#include <cstring>
using namespace std;
char* getInput();
char* getInput() {
	//char* p = new char[100];
	char result[100];
	cin.getline(result,100);
	return result;
}
int main(void) {
	cout << "���ڿ��� �Է��ϼ���: ";
	char* input = getInput();

	cout << "�Է��� ���ڿ�: " << input << endl;

	delete[] input;
}