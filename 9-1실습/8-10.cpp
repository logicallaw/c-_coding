#include <iostream>
#include <array>
using namespace std;
class GradeCalculator {
private:
	array<double, 5> scores;
public:
	GradeCalculator(const array<double, 5>& scores);
	double calculateAverageScore();
	char calculateGrade();
};
GradeCalculator::GradeCalculator(const array<double, 5>& scores)
	: scores{ scores } {}
double GradeCalculator::calculateAverageScore() {
	double sum = 0;
	for (double score : scores)
		sum += score;
	return sum / scores.size();
}
char GradeCalculator::calculateGrade() {
	double scoreAvg = calculateAverageScore();
	if (scoreAvg >= 90)
		return 'A';
	else if (scoreAvg >= 80)
		return 'B';
	else if (scoreAvg >= 70)
		return 'C';
	else if (scoreAvg >= 60)
		return 'D';
	else
		return 'F';
}
int main(void) {
	array<double, 5> scores;
	int cnt = 0;
	int score;
	while (cnt < 5) {
		cout << "Enter score " << cnt + 1 << ": ";
		cin >> scores[cnt];
		cnt++;
	}
	GradeCalculator grade{ scores };
	cout << "\nAverage score: " << grade.calculateAverageScore() << endl;
	cout << "Grade: " << grade.calculateGrade();

	return 0;

}