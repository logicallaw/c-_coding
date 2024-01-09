#include <iostream>
#include <cstring>
using namespace std;
int main(void) {
	cout << "게임명을 입력해 주세요: ";
	char name[100];
	cin.getline(name, sizeof(name));
	cout << "개발사를 입력해 주세요: ";
	char game[100];
	cin.getline(game, sizeof(name));
	char year[5];
	cout << "출시년도를 입력해 주세요: ";
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