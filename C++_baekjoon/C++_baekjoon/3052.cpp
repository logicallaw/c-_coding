//built-in-array
#include <iostream>
using namespace std;
int main(void) {
	int nums[10]{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
	int counter = 0;
	int inputNum;
	int remainder;
	bool pass;

	for (int i{ 0 }; i < 10; i++)
	{
		pass = 1;
		cin >> inputNum;
		remainder = inputNum % 42;
		//�ߺ� �˻�
		for (int j{ 0 }; j < counter; j++)
		{
			if (remainder == nums[j])
			{
				//�ߺ��� ���̻� �˻� ���Ѵ�.
				pass = 0;
				break;
			}
		}
		//�ߺ� �˻翡�� ������ ����ϸ� ���ο� ������ �޾Ƶ��δ�.
		if (pass)
			nums[counter++] = remainder;
	}

	cout << counter;
	return 0;
}