/*
난수를 찾는 프로그램.
프로그램 재실행시 난수는 달라야한다.
난수는 세자리수이다.
정수는 누적되어 합계된다.
game(sum, 난수값)
정수를 입력받아 sum더한다.
입력된 값과 난수값을 비교해 up, down메시지 출력한다.
sum == 난수값 일치하면 game()함수가 끝나고
마지막에 sum을 출력한다.

game()
매번 입력되고 값 비교해 출력
반복문X 재귀?
	cout << 정수 입력
	cin >> n;
	if 

void game(int& sum, int& num);

game(sum, num)
	cout << 정수 입력
	cin >> n;
if ((sum + n) < num)
	down()
	return game(sum+n < num);
else if ((sum + n) > num)
	up
	return game(sum, num
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void game(int& sum, int& rnd);

int main(void)
{
	int sum = 0;
	int rnd;
	srand(time(0));
	rnd = rand() % (999-100+1) + 100;
	game(sum, rnd);
	cout << "생성된 난수: " << sum << endl;

	return 0;
}

void game(int& sum, int& rnd)
{
	int num;
	cout << "정수를 입력하세요: ";
	cin >> num;

	sum += num;

	if (sum > rnd)
	{
		cout << "down (sum: " << sum << ")" << endl << endl;
		return game(sum, rnd);
	}
	else if (sum < rnd)
	{
		cout << "up (sum: " << sum<< ")" << endl << endl;
		return game(sum, rnd);
	}

}