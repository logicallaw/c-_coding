//built-in-array
#include <iostream>
using namespace std;
int main(void) {
	int students[30]{};
	int submitStudent;
	int unsubmitStudents[2];
	int counter = 0;

	for (int i{ 0 }; i < 28; i++)
	{
		cin >> submitStudent;
		students[submitStudent - 1] = 1; //������ �л��� 1 ����
	}

	for (int i{ 0 }; i < 30; i++)
		if (!students[i]) //������ �л��̸�..
			unsubmitStudents[counter++] = i + 1;
	
	unsubmitStudents[0] = (unsubmitStudents[0] > unsubmitStudents[1]) ? unsubmitStudents[1] : unsubmitStudents[0];
	cout << unsubmitStudents[0] << endl;
	cout << unsubmitStudents[1];
}