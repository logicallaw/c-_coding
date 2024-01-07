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

	cout << "�л� ���� �Է��ϼ���: ";
	cin >> size;

	for (int i{ 0 }; i < size; i++)
	{
		cout << "\n�л� " << i+ 1 << "�� ���� ���� �Է��ϼ���: ";
		cin >> cnt;

		for (int j{ 1 }; j <= cnt; j++)
		{
			cout << "���� " << j << "�� �Է��ϼ���: ";
			cin >> num;
			student[i].addNums(num);
		}
	}
	cout << "\n��ü �л����� ���: " << getOverallAverage(student, size);

	return 0;
}
void Student::addNums(int num) {
	//������ �߰��մϴ�.
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