/*
������ ã�� ���α׷�.
���α׷� ������ ������ �޶���Ѵ�.
������ ���ڸ����̴�.
������ �����Ǿ� �հ�ȴ�.
game(sum, ������)
������ �Է¹޾� sum���Ѵ�.
�Էµ� ���� �������� ���� up, down�޽��� ����Ѵ�.
sum == ������ ��ġ�ϸ� game()�Լ��� ������
�������� sum�� ����Ѵ�.

game()
�Ź� �Էµǰ� �� ���� ���
�ݺ���X ���?
	cout << ���� �Է�
	cin >> n;
	if 

void game(int& sum, int& num);

game(sum, num)
	cout << ���� �Է�
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
	cout << "������ ����: " << sum << endl;

	return 0;
}

void game(int& sum, int& rnd)
{
	int num;
	cout << "������ �Է��ϼ���: ";
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