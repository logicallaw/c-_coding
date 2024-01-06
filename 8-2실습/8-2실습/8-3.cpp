#include <iostream>
#include <iomanip>
using namespace std;
class Student {
private:
	string name;
	double score1, score2, score3;
	double avg;
	
public:
	Student();
	void setName(string name);
	void setScores(double score1, double score2, double score3);
	string getName() const;
	double getScore1() const;
	double getScore2() const;
	double getScore3() const;
	double getAvg() const;
	void scoreAvg();
};

Student::Student()
	: name{ "noname" }, score1{ 0 }, score2{ 0 }, score3{ 0 } {};
void Student::setName(string name) { this->name = name; }
void Student::setScores(double s1, double s2, double s3) {
	this->score1 = s1;
	this->score2 = s2;
	this->score3 = s3;
}
string Student::getName() const { return name; }
double Student::getScore1() const { return score1; }
double Student::getScore2() const{ return score2; }
double Student::getScore3() const { return score3; }
void input(Student students[], int cnt);
void input(Student students[], int cnt) {
	string name;
	double s1, s2, s3;
	cout << "Input Name: ";
	cin >> name;
	cout << "Input 3 Scores: ";
	cin >> s1 >> s2 >> s3;
	students[cnt].setName(name);
	students[cnt].setScores(s1, s2, s3);
}
double Student::getAvg() const { return avg; }
void Student::scoreAvg() {

	this->avg = (this->score1 + this->score2 + this->score3) / 3.0;
}

int main(void) {
	Student students[4];
	int cnt = 0;
	while (cnt < 4)
	{
		input(students, cnt);
		cnt++;
	}
	
	cout << endl;
	cout << setw(8) << left << "Name" << setw(8) << "Score 1" <<
		setw(8) << "Score 2" << setw(8) << "Score 3" << endl;
	for (Student& student : students)
	{
		student.scoreAvg();
		cout << setw(8) << left << student.getName() << setw(8) << student.getScore1() <<
			setw(8) << student.getScore2() << setw(8) << student.getScore3() << setw(8) << student.getAvg() << endl;
	}return 0;
}