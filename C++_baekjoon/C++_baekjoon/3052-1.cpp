//vector
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
	vector<int> nums;
	int inputNum;
	int remainder;
	bool pass;

	for (int i{ 0 }; i < 10; i++)
	{
		pass = 1;
		cin >> inputNum;
		remainder = inputNum % 42;
		//�ߺ� �˻�
		for (int j{ 0 }; j < nums.size(); j++)
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
			nums.push_back(remainder);
	}

	cout << nums.size();
	return 0;
}