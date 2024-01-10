/*
�л� �Ѹ��� �� ���� ���� �����ϴ� Score class �����Ѵ�.
�⺻, �Ű�����, ���� ������ ����� ����
���� ���� ��ü�����ȴٸ� �� ���� 0,1,2�� �ʱ�ȭ�Ѵ�.
��� �����ڴ� ��� �ʱ�ȭ ����Ʈ�� ����Ͽ� ������� �ʱ�ȭ�Ѵ�
�� ���� ���� print ����Լ�
�� ���� ������ �� ���� sum ����Լ�
*/
#include <iostream>
using namespace std;
class Score
{
private:
	int _a, _b, _c;
public:
	Score(); //�⺻������
	Score(int a, int b, int c); //�Ű�����������
	Score(const Score& score); //���������
	void print() const; //�� ���� ��� ����Լ�
	int sum() const; //�� ������ �� �����ϴ� ����Լ�
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
//Score::������ ����
Score::Score()
	: _a{ 0 }, _b{ 1 }, _c{ 2 } {}
Score::Score(int a, int b, int c)
	: _a{ a }, _b{ b }, _c{ c } {}
Score::Score(const Score& score)
	: _a{ score._a }, _b{ score._b }, _c{ score._c } {}
//Score::����Լ� ����
void Score::print() const { cout << _a << " " << _b << " " << _c << endl; }
int Score::sum() const { return _a + _b + _c; }