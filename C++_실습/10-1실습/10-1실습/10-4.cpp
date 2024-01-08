#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
class Assignment {
private:
	char id[9];
	char name[21];
	char filename[21];
public:
	Assignment(const char* assignmentinfo) {
		int idx;
		strncpy_s(id, assignmentinfo, 8);
		cout << id << endl;
		for (idx = 9; idx < strlen(assignmentinfo); idx++)
			if (assignmentinfo[idx] == '_')
				break;
		strncpy_s(name, assignmentinfo + 9, idx - 9);
		strncpy_s(filename, assignmentinfo + idx + 1, strlen(assignmentinfo) - idx);
	}
	~Assignment();
	void printInfo() const;
	void printBasicInfo() const {
		cout << id << " " << name << endl;
	};
};
Assignment::~Assignment() {
}

void Assignment::printInfo() const {
	cout << "===���� ����===" << endl;
	cout << "�й�: " << id << endl;
	cout << "�̸�: " << name << endl;
	cout << "������: " << filename << endl << endl;
}

int main(void) {
	vector<Assignment> students;
	char* str = new char[51]; //20 20 8 2 1 
	cout << "�������� �Է����ּ���: ";
	while (cin.getline(str, 51,'\n')) { //EOF �Է½� ����
		students.push_back(Assignment{ str });
		students[students.size() - 1].printInfo();

		cout << "�������� �Է����ּ���: ";
	}
	cout << "===������ ������ �л� ���===";
	for (int i{ 0 }; i < students.size(); i++)
		students[i].printBasicInfo();
	delete[] str;
}