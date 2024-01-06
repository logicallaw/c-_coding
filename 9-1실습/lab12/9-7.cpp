#include <iostream>
using namespace std;
class Account {
private:
	char name;
	int account;
public:
	Account(char name, int account);
	void progress(int money);

};
Account::Account(char name, int account)
	: name{ name }, account{ account } {}
void Account::progress(int money) {
	int temp = account + money;
	if (temp >= 0)
	{
		account += money;
		cout << name << "������ �ܰ� " << money << "��ŭ �����Ǿ����ϴ�. �ܰ�: " << account << endl << endl;
	}
	else
		cout << "�߸��� �ݾ��� �Է��Ͽ����ϴ�." << endl <<  endl;
	
	
}
int main(void) {
	Account acc1{ 'A',0 };
	Account acc2{ 'B',0 };
	Account acc3{ 'C',0 };

	int size;
	cout << "���� Ƚ���� �Է��� �ּ���: ";
	cin >> size;

	cout << endl;
	char name;
	int account;
	while (size--)
	{
		cout << "���¿� �����ݾ��� �Է��� �ּ���: ";
		cin >> name >> account;
		Account* pac;
		switch (name) {
		case 'A':
			pac = &acc1;
			(*pac).progress(account);
			break;
		case 'B':
			pac = &acc2;
			(*pac).progress(account);
			break;
		case 'C':
			pac = &acc3;
			(*pac).progress(account);
			break;
		}
	}
	return 0;
}