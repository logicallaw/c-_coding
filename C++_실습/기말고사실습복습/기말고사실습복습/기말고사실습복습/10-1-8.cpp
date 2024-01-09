#include <iostream>
#include <cstring>
using namespace std;
class Semester {
private:
	char* subject;
	int weeks;
public:
	Semester(const char* subject, int weeks);
	~Semester();
	const char* getSubject() const;
	int getWeeks() const;
	void setSubject(const char* subject);
	void setWeeks(int weeks);
	void printSemesterInfo() const;
};

Semester::Semester(const char* subject, int weeks) {
	this->subject = new char[strlen(subject) + 1]; //����
	//for (int i{ 0 }; i < strlen(subject); i++) {
	//	(this->subject)[i] = subject[i];
	//}
	strncpy_s(this->subject,sizeof(subject) + 1, subject, strlen(subject));
	//(this->subject)[strlen(subject)] = '\0';
	this->weeks = weeks;
}

Semester::~Semester() { delete[] subject; }

const char* Semester::getSubject() const { return subject; }
int Semester::getWeeks() const { return weeks; }
void Semester::setSubject(const char* subject) {
	delete[] this->subject;
	(this->subject) = new char[strlen(subject) + 1]; //����
	for (int i{ 0 }; i < strlen(subject); i++) {
		(this->subject)[i] = subject[i];
	}
	(this->subject)[strlen(subject)] = '\0';
}
void Semester::setWeeks(int weeks) {
	this->weeks = weeks;
}

void Semester::printSemesterInfo() const {
	cout << "=== �б� ���� ===" << endl;
	cout << "����: " << subject << endl;
	cout << "����: " << weeks << endl;
}

int main(void) {
	cout << "������� �Է��ϼ���: ";
	char subject[100];
	cin.getline(subject, 100);
	cout << "������ �Է��ϼ��� :";
	int weeks;
	cin >> weeks;
	cin.ignore();

	Semester semester{ subject, weeks };
	cout << endl;
	semester.printSemesterInfo();
	cout << endl;

	char changedSubject[100];

	cout << "����� ������� �Է��ϼ���: ";
	cin.getline(changedSubject, 100);

	int changedWeeks;
	cout << "����� ������ �Է��ϼ���: ";
	cin >> changedWeeks;

	semester.setSubject(changedSubject);
	semester.setWeeks(changedWeeks);

	cout << endl;
	semester.printSemesterInfo();
	return 0;
}
/*
OOP1
14
Java Programming
16
*/