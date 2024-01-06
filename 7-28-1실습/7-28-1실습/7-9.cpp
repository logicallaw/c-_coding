/*
3 C 12000 A 34000 C 55000
*/
#include <iostream>
using namespace std;

class Card
{
private:
	string _name;
	int _counter;
	int _info[100] = { 0 };
	int _total;
public:
	Card(string name);
	void addInfo(int info);
	void printCard() const;
};

int main(void)
{
	Card cardA{ "A" };
	Card cardB{ "B" };
	Card cardC{ "C" };
	int size;
	string name;
	int info;
	cout << "�� ���� Ƚ���� �Է��� �ּ���: ";
	cin >> size;
	for (int i{ 0 }; i < size; i++)
	{
		cout << "�̿��� ī��� �ݾ��� �Է��� �ּ���: ";
		cin >> name >> info;
		if (name == "A")
			cardA.addInfo(info);
		else if (name == "B")
			cardB.addInfo(info);
		else
			cardC.addInfo(info);
	}
	cout << endl;
	cardA.printCard();
	cardB.printCard();
	cardC.printCard();

	return 0;
}

Card::Card(string name)
	: _name{ name }, _counter{ 0 }, _total{ 0 } {}

void Card::addInfo(int info) {
	for (int i{ 0 }; i < 100; i++)
	{
		if (_info[i] == 0)
		{
			_info[i] = info;
			_total += info;
			_counter++;
			break;
		}
	}
}
void Card::printCard() const
{
	cout << _name << "ī�� ����" << endl;
	cout << "���� Ƚ��: " << _counter << "ȸ" << endl;
	cout << "���� �ݾ�: " << _total << endl;
	cout << "���� ����: " << endl;
	for (int i{ 0 }; i < _counter; i++)
	{
		if (_info[i] != 0)
		{
			cout << _info[i] << endl;
		}
	}
	cout << endl;
}

