#include <iostream>
/*
while(cin����)
:
iostream �������
����� ���� �ڷ����� �˸��� ���� ������ cin�� true�� ��ȯ�ϰ�,
�ڷ����� �ٸ� ���� ������ cin�� false�� ��ȯ�ϴ� ��Ģ�� �����Ѵ�.
*/
using namespace std;
int main(void)
{
	unsigned int a, b;
	while (cin >> a >> b)
	{
		cout << a + b << endl;
	}
	return 0;
}