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
	cout << "문자열을 입력하세요: ";
	char* input = getInput();

	cout << "입력한 문자열: " << input << endl;

	delete[] input;
}