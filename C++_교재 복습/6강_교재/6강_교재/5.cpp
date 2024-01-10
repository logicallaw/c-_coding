#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main(void)
{
	int low = 5;
	int high = 15;
	int tryLimit = 5;
	int guess;

	srand(time(0)); // ���� �ð����� ������ �����Ѵ�.
	int temp = rand(); // ������ �Է¹޴´�.
	int num = temp % (high - low + 1) + low;

	bool found = false;
	for (int counter{ 1 }; counter <= tryLimit && !found; ++counter)
	{
		do
		{
			cout << "5~15 ������ ������ �Է��ϼ���: ";
			cin >> guess;
		} while (guess < 5 || guess>15);

		if (guess == num)
		{
			found = true;
		}
		else if (guess > num)
		{
			cout << "�� ���� �����Դϴ�." << endl;
		}
		else
		{
			cout << "�� ū �����Դϴ�." << endl;
		}
	}
	if (found)
	{
		cout << "�����մϴ�. ������ �����߽��ϴ�." << endl;
		cout << "��: " << num << endl;
	}
	else
	{
		cout << "�ƽ��� ������ �����߽��ϴ�." << endl;
		cout << "��: " << num << endl;
	}
}