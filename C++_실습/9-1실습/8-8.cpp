/*
*/
#include <iostream>
using namespace std;
class Problem {
private:
	int wrong; //틀린 횟수
	bool correct; //정답 여부
	int time; //푼 시간
public:
	Problem();
	void setWrong();
	void setCorrect(int t);
	int getPenalty();
	bool isCorrect();
	
};
Problem::Problem()
	: wrong{ 0 }, correct{ 0 }, time{ 0 } {}

void Problem::setWrong() {
	wrong++;
}
void Problem::setCorrect(int t) {
	//correct 문제만 패널티 계산.
	time += t;
	correct = 1;
}
int Problem::getPenalty() {
	int penalty = 0;
	penalty += wrong * 20 + time;
	return penalty;
}
bool Problem::isCorrect() {
	return correct;
}
int sumPenlty(Problem param[]);
int sumPenlty(Problem param[]) {
	int sum = 0;
	for (int i{ 0 }; i < 7; i++)
	{
		if (param[i].isCorrect())
		{
			sum += param[i].getPenalty();
		}
	}
	return sum;
}

int getWinner(int r1, int r2, int r3)
{
	if (r1 > r2)
	{
		if (r1 > r3)
			return 0;
		else
			return 2;
	}
	else
	{
		if (r2 > r3)
			return 1;
		else
			return 2;
	}
}

int main(void) {
	int size;
	Problem teams[3][7];

	cout << "총 제출 수를 입력해 주세요: ";
	cin >> size;

	int team, num, time;
	string result;

	int t1 = 0, t2 = 0, t3 = 0;

	while (size--)
	{
		cout << "제출 결과를 입력해 주세요(팀/문제/시간/결과): ";
		cin >> team >> num >> time >> result;
		switch (team) {
		case 0:
			if (result == "Correct")
			{
				teams[0][num].setCorrect(time);
				t1++;
			}
			else
				teams[0][num].setWrong();
			break;
		case 1:
			if (result == "Correct")
			{
				teams[1][num].setCorrect(time);
				t2++;
			}
			else
				teams[1][num].setWrong();
			break;
		case 2:
			if (result == "Correct")
			{
				teams[2][num].setCorrect(time);
				t3++;
			}
			else
				teams[2][num].setWrong();
			break;
		}
	}

	int r1 = sumPenlty(teams[0]);
	int r2 = sumPenlty(teams[1]);
	int r3 = sumPenlty(teams[2]);


	cout << "\n0팀 맞은 문제: " << t1 << "문제 패널티 점수: " << r1 << endl;
	cout << "1팀 맞은 문제: " << t2 << "문제 패널티 점수: " << r2 << endl;
	cout << "2팀 맞은 문제: " << t3 << "문제 패널티 점수: " << r3 << endl;

	cout << "\n우승팀은 " << getWinner(r1, r2, r3) << "팀입니다!";

}