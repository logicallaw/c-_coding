/*
����int num �Է� �޴´�.
���� �Է��� ���X �� ���� 5 �Ǵ� 16�̸� whille�� �����Ѵ�.
!(num == 5 || num == 16)
(
*/
#include <iostream>
using namespace std;
int main(void)
{
	int num = 0;
	while (!(num == 5 || num == 16))
	{
		cout << "���ڸ� �Է��ϼ���: ";
		cin >> num;
	}
	cout << "���α׷��� �����մϴ�." << endl;
	return 0;
}