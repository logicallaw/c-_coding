#pragma once
#include <iostream>
using namespace std;
//Account class.h
class Account
{
private:
	int _balance;
	int _name;
	static int counter;
public:
	Account(int balance);
	~Account();
	int getBalance() const;

	void withdraw(int money);
	void addBalance(int money);
	static void addCounter();

};