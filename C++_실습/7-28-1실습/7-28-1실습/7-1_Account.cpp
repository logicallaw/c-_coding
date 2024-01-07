#include <iostream>
#include "7-1_Account.h"
using namespace std;

int Account::counter{ 1000001 };

Account::Account(int balance)
	: _balance{ balance }, _name{ counter } {
	cout << counter << " ���� ����" << endl;
	cout << "�ܾ�: " << _balance << endl << endl;
	addCounter();
}
Account::~Account() { cout << _name << " ���� ����" << endl; }

int Account::getBalance() const { return _balance; }
void Account::addBalance(int money) { 
	cout << "����: " << _name << endl;
	cout << "�Ա�: " << money << endl;
	if (money == 0)
	{
		cout << "�Ա� ���" << endl;
	}
	else
	{
		_balance += money;
	}
	cout << "�ܾ�: " << _balance << endl << endl;
}
void Account::withdraw(int money) { 
	cout << "����: " << _name << endl;
	cout << "���: " << money << endl;
	if (_balance - money < 0)
	{
		cout << "��� ���" << endl;
	}
	else
	{
		_balance -= money;
	}
	cout << "�ܾ�: " << _balance << endl << endl;
}
void Account::addCounter() { counter++; }