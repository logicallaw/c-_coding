#include <iostream>
#include <cstring>
using namespace std;
char getLen(char* str, const int& size) {
	int cnt = 0;
	for (int i{ 0 }; i < size; i++) {
		if (str[i] != '\0')
			cnt++;
		else if (str[i] == '\0')
			break;
	}
	return cnt;
};
int main(void) {
	char* password;
	cout << "������� ��й�ȣ�� �Է����ּ���: ";
	cin >> pwd;

	password = new char[pwd]


	char* inputKey;
	int key;
	cout << "������� �Էµ� ���ڸ� �Է����ּ���: ";
	cin >> key;

	int pwdLen = getLen(password, sizeof(password));
	int keyLen = getLen(inputKey, sizeof(inputKey));

	cout << pwdLen << " " << keyLen << endl;
	char* temp0 = password;
	char* temp = inputKey + (keyLen - pwdLen);
	cout << temp0 << "|" << temp << endl; 
	//bool result = strcmp(password, (inputKey + (keyLen - pwdLen) - 1));
	bool result = (temp0 == temp) ? true : false;
	cout << typeid(password).name() << " " << typeid(inputKey + (keyLen - pwdLen)).name() << endl;
	cout << password << "|" << inputKey + (keyLen - pwdLen);
	if (result)
		cout << "���� ���Ƚ��ϴ�.";
	else
		cout << "��й�ȣ�� Ʋ�Ƚ��ϴ�.";

	delete[] password;
}