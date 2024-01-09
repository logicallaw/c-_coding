#include <iostream>
#include <cstring>
using namespace std;
char* getInput() {
	char* temp = new char[100];
	cin.getline(temp, 100);
	return temp;
}
int main(void) {
	cout << "문자열을 입력하세요: ";
	char* input = getInput();
	cout << "입력한 문자열: " << input << endl;

	delete[] input;
}