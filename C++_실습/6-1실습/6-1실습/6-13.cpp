/*
두개의 주사위로 오늘의 운을 확인한다.
unsigned int seed 오늘의 날짜(8자리)
주사위 굴리고 합을 리턴하는 rollDice함수 정의한다.

main()
	cin >> seed;
	srand(seed);

	result = rollDice(seed);
	if (result == 12) cout << 운좋은날
	else cout << unlucky인 날
unsigned int rollDice(unsigned int seed)
	
	//두 눈의 수의 합이 12이면 운 좋은날.
	이외의 눈이면 언럭키인 날.
	unsigned int d1, d2;
	d1 = rand() % 6 + 1;
	d2 = rand() % 6 + 1;
	return d1 + d2;

*/
#include <iostream>
#include <cstdlib>
using namespace std;
unsigned int rollDice(unsigned int seed);
int main(void)
{
	unsigned int seed;
	cout << "오늘의 날짜를 입력하세요: ";
	cin >> seed;
	srand(seed);
	unsigned int result = rollDice(seed);
	if (result == 12) cout << "Lucky!!" << endl;
	else cout << "Unlucky..." << endl;

	return 0;
}

unsigned int rollDice(unsigned int seed)
{
	unsigned int d1, d2;
	d1 = rand() % 6 + 1;
	d2 = rand() % 6 + 1;
	cout << "\nDice 1: " << d1;
	cout << "\nDice 2: " << d2 << endl;
	return d1 + d2;
}