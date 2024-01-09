#include <iostream>
#include <array>
using namespace std;
class GradeCalculator {
private:
	array<double, 5> scores;
public:
	GradeCalculator(const array<double, 5>& scores);
	double calcualateAverageScores();
	char calculatorGrade();
};

GradeCalculator::GradeCalculator(const array<double, 5>& scores)
	: scores{ scores } {}
double GradeCalculator::calcualateAverageScores() {
	double sum = 0;
	for (const int& score : scores)
		sum += score;
	return sum / scores.size();
}
char GradeCalculator::calculatorGrade() {
	double avg = calcualateAverageScores();
	if (avg >= 90)
		return 'A';
	else if (avg >= 80)
		return 'B';
	else if (avg >= 70)
		return 'C';
	else if (avg >= 60)
		return 'D';
	else
		return 'F';
}

int main(void) {
	array<double, 5> scores;
	for (int i{ 1 }; i <= 5; i++)
	{
		cout << "Enter score " << i << ": ";
		cin >> scores[i - 1];
	}
	GradeCalculator gradecalculator{ scores };

	cout << endl;
	cout << "Average score: " << gradecalculator.calcualateAverageScores() << endl;
	cout << "Grade: " << gradecalculator.calculatorGrade() << endl;

}