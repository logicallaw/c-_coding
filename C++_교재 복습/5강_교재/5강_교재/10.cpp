#include <iostream>
using namespace std;
/*
int�� ���� �Է�
0���� �Էµ� ����-1���� �������� �����Ͽ� ���ٿ� ���
*/
int main(void)
{
	int numInt;
	cout << "����� ������ �Է��ϼ���: ";
	cin >> numInt;

	//unsigned int cnt{0} or cnt (0) or cnt = (0) or cnt = {0}
	for (unsigned int cnt{ 0 }; cnt < numInt; cnt++)
	{
		cout << cnt << " ";
	}
	return 0;
}