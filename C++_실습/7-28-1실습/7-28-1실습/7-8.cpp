/*

for  (<size)
cin >> students[i]

average(student)

*/
#include <iostream>
using namespace std;
double average(const int ary[], const int size);
int main(void)
{
	int students[40];
	int size;
	cout << "�л����� ���� �Է��� �ּ���: ";
	cin >> size;

	cout << endl;
	for (int i{ 0 }; i < size; i++)
	{
		cout << "�л� " << i + 1 << "�� ����: ";
		cin >> students[i];
	}

	cout << endl << "�л����� ���������� ����� " << average(students, size) << "�� �Դϴ�.";

	return 0;
}
double average(const int ary[], const int size)
{
	double result = 0;
	for (int i{ 0 }; i < size; i++)
		result += ary[i];
	return result / size ;
}