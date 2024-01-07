#include <iostream>
using namespace std;
class Student
{
private:
	int nums[10] = { 0 };
	int _cnt = 0;
public:
	Student() = default;
	void addNums(int num);
	double getAvg() const;
};
double getOverallAverage(Student student[], int size);

int main(void)
{
	int size, cnt, num;
	Student student[10];

	cout << "학생 수를 입력하세요: ";
	cin >> size;

	for (int i{ 0 }; i < size; i++)
	{
		cout << "\n학생 " << i+ 1 << "의 성적 수를 입력하세요: ";
		cin >> cnt;

		for (int j{ 1 }; j <= cnt; j++)
		{
			cout << "성적 " << j << "을 입력하세요: ";
			cin >> num;
			student[i].addNums(num);
		}
	}
	cout << "\n전체 학생들의 평균: " << getOverallAverage(student, size);

	return 0;
}
void Student::addNums(int num) {
	//성적을 추가합니다.
	nums[_cnt++] = num;
}

double getOverallAverage(Student student[], int size) {
	double sumAvg = 0.0;
	for (int i{ 0 }; i < size; i++)
	{
		sumAvg += student[i].getAvg();
	}
	sumAvg = sumAvg / size;
	return sumAvg;

}

double Student::getAvg() const
{
	double sum = 0;
	for (int i{ 0 }; i < _cnt; i++)
		sum += nums[i];
	return sum / _cnt;
}