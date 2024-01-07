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
	cout << "학생들의 수를 입력해 주세요: ";
	cin >> size;

	cout << endl;
	for (int i{ 0 }; i < size; i++)
	{
		cout << "학생 " << i + 1 << "의 점수: ";
		cin >> students[i];
	}

	cout << endl << "학생들의 시험점수의 평균은 " << average(students, size) << "점 입니다.";

	return 0;
}
double average(const int ary[], const int size)
{
	double result = 0;
	for (int i{ 0 }; i < size; i++)
		result += ary[i];
	return result / size ;
}