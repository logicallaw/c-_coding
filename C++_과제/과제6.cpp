/*
학생 한명의 세 과목 점수 저장하는 Score class 정의한다.
기본, 매개변수, 복사 생성자 명시적 정의
점수 없이 객체생성된다면 세 과목 0,1,2로 초기화한다.
모든 생성자는 멤버 초기화 리스트를 사용하여 멤버변수 초기화한다
세 과목 점수 print 멤버함수
세 과목 점수의 합 리턴 sum 멤버함수
*/
#include <iostream>
using namespace std;
class Score
{
private:
	int _a, _b, _c;
public:
	Score(); //기본생성자
	Score(int a, int b, int c); //매개변수생성자
	Score(const Score& score); //복사생성자
	void print() const; //세 점수 출력 멤버함수
	int sum() const; //세 점수의 합 리턴하는 멤버함수
};

int main(void)
{
	Score score1;
	Score score2{ 10, 20, 30 };
	Score score3{ score2 };

	score1.print();
	score2.print();
	score3.print();
	cout << score1.sum() << endl;
	cout << score2.sum() << endl;
	cout << score3.sum() << endl;

	return 0;
}
//Score::생성자 정의
Score::Score()
	: _a{ 0 }, _b{ 1 }, _c{ 2 } {}
Score::Score(int a, int b, int c)
	: _a{ a }, _b{ b }, _c{ c } {}
Score::Score(const Score& score)
	: _a{ score._a }, _b{ score._b }, _c{ score._c } {}
//Score::멤버함수 정의
void Score::print() const { cout << _a << " " << _b << " " << _c << endl; }
int Score::sum() const { return _a + _b + _c; }