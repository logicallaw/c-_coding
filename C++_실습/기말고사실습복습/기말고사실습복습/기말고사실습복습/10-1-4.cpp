#include <iostream>
#include <vector>
using namespace std;
class Assignment {
private:
	char id[9];
	char name[21];
	char filename[21];
public:
	Assignment(const char* p);
	void printInfo() const;
	const char* getName() const { return name; }	
	const char* getId() const { return id; }
};

Assignment::Assignment(const char* p) {
	strncpy_s(id, p, 8);
	id[8] = '\0';
	int idx;
	for (int i{ 9 }; i < strlen(p); i++) {
		if (p[i] == '_') {
			idx = i;
			break;
		}
	}//12210795_junho_(15-9)=6
	strncpy_s(name, p + 9, idx - 8); //idx + 1 - 9;
	name[idx - 9] = '\0'; //idx + 1 - 9 - 1;
	strcpy_s(filename, p + idx + 1); //p + idx + 1
	filename[strlen(p) - 1] = '\0'; //p + idx + 1 - 1

}
void Assignment::printInfo() const {
	cout << "===과제 정보===" << endl;
	cout << "학번: " << id << endl;
	cout << "이름: " << name << endl;
	cout << "과제명: " << filename << endl;
}
int main(void) {
	vector<Assignment> arr;
	
	cout << "과제명을 입력해 주세요: ";
	char temp[51];
	while (cin.getline(temp,51)) {
		arr.push_back(Assignment{temp});
		arr[arr.size() - 1].printInfo();
		cout << "\n과제명을 입력해 주세요: ";
		//delete[] students;
		//cin.ignore();
	}

	cout << endl;
	cout << "\n===과제를 제출한 학생 목록===" << endl;
	for (int i{ 0 }; i < arr.size(); i++)
	{
		cout << arr[i].getId() << " " << arr[i].getName() << endl;
	}
}