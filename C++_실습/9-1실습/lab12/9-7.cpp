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
		cout << name << "계좌의 잔고가 " << money << "만큼 변동되었습니다. 잔고: " << account << endl << endl;
	}
	else
		cout << "잘못된 금액을 입력하였습니다." << endl <<  endl;
	
	
}
int main(void) {
	Account acc1{ 'A',0 };
	Account acc2{ 'B',0 };
	Account acc3{ 'C',0 };

	int size;
	cout << "변동 횟수를 입력해 주세요: ";
	cin >> size;

	cout << endl;
	char name;
	int account;
	while (size--)
	{
		cout << "계좌와 변동금액을 입력해 주세요: ";
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