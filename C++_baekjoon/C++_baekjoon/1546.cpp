//built-in-array
#include <iostream>
#include <iomanip>
using namespace std;

double findMax(double nums[], const int& size);

int main(void) {
	double nums[1000];
	int size;

	//���� �� ������ ������ �Է� �޾� �迭�� ũ�⸦ �����մϴ�.
	cin >> size;

	//������ �Է� �޽��ϴ�.
	for (int i{ 0 }; i < size; i++) 
		cin >> nums[i];

	//���� �� �ִ��� ã���ϴ�.
	double numMax = findMax(nums, size);

	//���ο� �������� �ٲپ� �� ���մϴ�.
	double sumNums = 0;
	for (int i{ 0 }; i < size; i++)
		sumNums += (nums[i] * 100 ) / numMax;

	cout << fixed << setprecision(3) << sumNums / size;

	return 0;
}
double findMax(double nums[], const int& size) {
	double numMax = nums[0];
	for (int i{ 0 }; i < size; i++)
		numMax = (numMax <= nums[i]) ? nums[i] : numMax;
	return numMax;
}