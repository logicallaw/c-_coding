#include <iostream>
using namespace std;
int main(void)
{
	int num;
	cout << "���� ������ �Է��ϼ���(����� -1): ";
	int result;
	while (cin >> num && num != -1) //�Էµ� ���� ���ÿ� �� �̻����� ������ ����.
	{
		result = 0;
		while(num) { //�������� �������� 10�� ������� ���� �ڸ����� �̵���Ų��.
			result *= 10; // 20 210
			result += num % 10; //2 21 215
			num /= 10; //51 5 0
		}
		cout << "������ ���: " << result << endl;
		cout << "���� ���� ������ �Է��ϼ���(����� -1): ";
	}
}