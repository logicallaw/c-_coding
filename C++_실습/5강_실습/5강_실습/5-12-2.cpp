/*
(�� �Է�&&���� != -1)
	
*/
#include <iostream>
using namespace std;
int main(void)
{
	int num;
	cout << "���� ������ �Է��ϼ���(����� -1): ";
	int result;
	while ((cin >> num) && (num != -1))
	{
		result = 0;
		while (num)
		{
			result *= 10; 
			result += (num % 10); 
			num /= 10; 
		}
		cout << "������ ��� : " << result << endl;
		cout << "���� ���� ������ �Է��ϼ���(����� -1): ";
	}

	return 0;
}