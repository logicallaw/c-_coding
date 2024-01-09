#include <iostream>
#include <vector>
using namespace std;
class Athlete {
private:
	string name;
	int age;
	double recode;
public:

	Athlete(string name, int age, double recode);
	string getName() const {
		return name;
	}
	int getAge() const { return age; }
	double getRecode() const { return recode; }
};
void bubble_sort(vector<Athlete>& athlete);
void swap(Athlete& a1, Athlete& a2);

Athlete::Athlete(string name, int age, double recode)
	: name{ name }, age{ age }, recode{ recode } {}

int main(void) {
	int size;
	cout << "선수들의 수를 입력해주세요: ";
	cin >> size;

	vector<Athlete> athlete;
	string name;
	int age;
	double recode;
	for (int i{ 0 }; i < size; i++) {
		cout << "이름과 나이, 기록을 입력해 주세요: ";
		cin >> name >> age >> recode;
		athlete.push_back(Athlete{ name, age, recode });
	}
	cout << endl;

	for (int i{ 0 }; i < 3; i++)
		cout << i + 1 << "등: " << athlete[i].getName() << "(" << athlete[i].getAge() << ") 기록: " << athlete[i].getRecode() << endl;
	return 0;
}

void bubble_sort(vector<Athlete>& athlete) {
	for (int i{ 0 }; i < athlete.size() - 1; i++)
		for (int j{ 0 }; j < athlete.size() - 1 - i; j++)
			if (athlete[j].getRecode() < athlete[j+1].getRecode())
				swap(athlete[j], athlete[j + 1]);
}

void swap(Athlete& a1, Athlete& a2) {
	Athlete temp = a1;
	a1 = a2;
	a2 = temp;
}