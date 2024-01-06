#include <iostream>
#include <vector>
using namespace std;
class Athlete {
private:
	string name;
	int age;
	double recode;
public:
	Athlete() = default;
	Athlete(string name, int age, double recode);
	string getName() const;
	int getAge() const;
	double getRecode() const;
};

Athlete::Athlete(string name, int age, double recode)
	: name{ name }, age{ age }, recode{ recode } {}
string Athlete::getName() const { return name; }
int Athlete::getAge() const { return age; }
double Athlete::getRecode() const { return recode; }

void printWinner(vector<Athlete>& athletes, Athlete winners[]);
void printWinner(vector<Athlete>& athletes, Athlete winners[]) {
	for (int i{ 0 }; i < athletes.size(); i++) {
		//
	}
}

int main(void) {
	vector<Athlete> athletes;
	Athlete winners[3];
	int size;
	cout << "�������� ���� �Է��ϼ���: ";
	cin >> size;

	string name;
	int age;
	double recode;

	while (size--) {
		cout << "�̸��� ����, ����� �Է��� �ּ���: ";
		cin >> name >> age >> recode;
		athletes.push_back(Athlete{ name, age, recode });
	}
	cout << endl;
}