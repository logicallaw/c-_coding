/*
���ڵ��� �հ� ���� ����ϴ� ���α׷��̴�.
int���� ������ ����(numCnt)�� �Է¹޴´�.
(�̶�, ���� �ƴ� ������ �ƴ� ���� �Է¹����� �ٽ� ��û�Ѵ�.do while��)
numCnt��ŭ ���� �Է¹޾� ���� double���� numSum�� double���� numMut(fixed,setprecision(2))�� ����Ͽ�
����Ѵ�.
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
	int numCnt;
	double numInput;
	double numSum = 0.00, numMul = 1.00;
	do
	{
		cout << "������ ������ ������ �ƴ� ������ �Է��ϼ���: ";
		cin >> numCnt;
	} while (numCnt < 0);

	cout << endl;
	for (unsigned int counter = 0; counter < numCnt; counter++)
	{
		cout << "���ڸ� �Է��ϼ���: ";
		cin >> numInput;
		numSum += numInput;
		numMul *= numInput;
	}
	cout << fixed << setprecision(2);
	cout << "\n�� = " << numSum;
	cout << "\n�� = " << numMul << endl;

	return 0;
}