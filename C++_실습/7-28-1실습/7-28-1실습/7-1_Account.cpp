#include <iostream>
#include "7-1_Account.h"
using namespace std;

int Account::counter{ 1000001 };

Account::Account(int balance)
	: _balance{ balance }, _name{ counter } {
	cout << counter << " °èÁÂ »ý¼º" << endl;
	cout << "ÀÜ¾×: " << _balance << endl << endl;
	addCounter();
}
Account::~Account() { cout << _name << " °èÁÂ »èÁ¦" << endl; }

int Account::getBalance() const { return _balance; }
void Account::addBalance(int money) { 
	cout << "°èÁÂ: " << _name << endl;
	cout << "ÀÔ±Ý: " << money << endl;
	if (money == 0)
	{
		cout << "ÀÔ±Ý Ãë¼Ò" << endl;
	}
	else
	{
		_balance += money;
	}
	cout << "ÀÜ¾×: " << _balance << endl << endl;
}
void Account::withdraw(int money) { 
	cout << "°èÁÂ: " << _name << endl;
	cout << "Ãâ±Ý: " << money << endl;
	if (_balance - money < 0)
	{
		cout << "Ãâ±Ý Ãë¼Ò" << endl;
	}
	else
	{
		_balance -= money;
	}
	cout << "ÀÜ¾×: " << _balance << endl << endl;
}
void Account::addCounter() { counter++; }