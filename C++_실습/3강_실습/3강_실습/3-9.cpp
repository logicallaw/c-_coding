#include <iostream>
using namespace std;
int main(void)
{
	unsigned int pcs, backs = 4;

	cout << "��Ʈ���� ������ �Է��ϼ���: ";
	cin >> pcs;

	cout << "�ʿ��� ������ ��: " << (pcs / backs) + 1 << endl;

	return 0;
}