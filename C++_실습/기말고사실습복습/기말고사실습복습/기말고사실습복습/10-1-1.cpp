#include <iostream>
#include <cstring>
using namespace std;
int main(void) {
	cout << "���Ӹ��� �Է��� �ּ���: ";
	char name[100];
	cin.getline(name, sizeof(name));
	cout << "���߻縦 �Է��� �ּ���: ";
	char game[100];
	cin.getline(game, sizeof(name));
	char year[5];
	cout << "��ó⵵�� �Է��� �ּ���: ";
	cin.getline(year, sizeof(year));
	
	strcat_s(name, "(");
	strcat_s(name, year);
	strcat_s(name, ") - ");
	strcat_s(name, game);
	cout << name;
	/*
Legue of Legend
Riot Games
2009
	*/
}