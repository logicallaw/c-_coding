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
	(this->subject) = new char[strlen(subject) + 1]; //����
	this->weeks = weeks;
	//for (int i{ 0 }; i < strlen(subject); i++) { //���� �ʱ�ȭ
	//	(this->subject)[i] = subject[i];
	//}
	//(this->subject)[strlen(subject)] = '\0';
	strcpy_s(this->subject, strlen(subject) + 1, subject);
}
const char* Semester::getSubject() const {
	return subject;
}
int Semester::getWeeks() const {
	return weeks;
}
void Semester::setSubject(const char* subject) {
	delete[] this->subject;
	(this->subject) = new char[strlen(subject) + 1]; //����
	for (int i{ 0 }; i < strlen(subject); i++) { //���� �ʱ�ȭ
		(this->subject)[i] = subject[i];
	}
	(this->subject)[strlen(subject)] = '\0';
}
void Semester::setWeeks(int weeks) {
	this->weeks = weeks;
}
void Semester::printSemesterInfo() const {
	cout << "����: " << getSubject() << endl;
	cout << "����: " << getWeeks() << endl << endl;
}
Semester::~Semester() {
	delete[] subject;
}

int main(void) {
	char subject[100];
	int weeks;
	cout << "������� �Է��ϼ���: ";
	cin.getline(subject, 100);
	cout << "������ �Է��ϼ���: ";
	cin >> weeks;
	cin.ignore();

	Semester semester{ subject, weeks };

	cout << endl << "=== �б� ���� ===" << endl;
	semester.printSemesterInfo();


	cout << "����� ������� �Է��ϼ���: ";
	cin.getline(subject, 100);
	semester.setSubject(subject);
	cout << "����� ������ �Է��ϼ���: ";
	cin >> weeks;
	semester.setWeeks(weeks);
	cin.ignore();

	cout << endl << "=== ����� �б� ���� ===" << endl;
	semester.printSemesterInfo();

}