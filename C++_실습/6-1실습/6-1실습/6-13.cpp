/*
�ΰ��� �ֻ����� ������ ���� Ȯ���Ѵ�.
unsigned int seed ������ ��¥(8�ڸ�)
�ֻ��� ������ ���� �����ϴ� rollDice�Լ� �����Ѵ�.

main()
	cin >> seed;
	srand(seed);

	result = rollDice(seed);
	if (result == 12) cout << ��������
	else cout << unlucky�� ��
unsigned int rollDice(unsigned int seed)
	
	//�� ���� ���� ���� 12�̸� �� ������.
	�̿��� ���̸� ��Ű�� ��.
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
	cout << "������ ��¥�� �Է��ϼ���: ";
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