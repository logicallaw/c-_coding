#include <iostream>
using namespace std;
void swap(int& num1, int& num2);

int main(void) {
	int nums[100];
	int rangeOfNums;
	int size;
	int index1, index2;

	cin >> rangeOfNums >> size;

	//nums�迭�� ũ�⸸ŭ �ٱ��ϸ� �����մϴ�.
	for (int i{ 0 }; i < rangeOfNums; i++)
		nums[i] = i + 1;

	//����� index ������ �޽��ϴ�.
	for (int i{ 0 }; i < size; i++)
	{
		cin >> index1 >> index2;
		//�ش� index��ŭ swap�մϴ�.
		while (index1 <= index2)
		{
			for (int j{ index1 }; j < index2; j++)
				swap(nums[j - 1], nums[j]);
			index2--; //swap�ϸ鼭 ������ �ٿ����ϴ�.
		}
	}

	//����մϴ�.
	for (int i{ 0 }; i < rangeOfNums; i++)
		cout << nums[i] << " ";
	return 0;
}

void swap(int& num1, int& num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;
}