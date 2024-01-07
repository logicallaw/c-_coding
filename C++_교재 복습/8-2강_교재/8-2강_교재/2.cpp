#include <iostream>
#include <iomanip>
using namespace std;

void findGrades(const int scores[], char grades[], int size) {
	char temp[] = { 'F','F','F','F','F','F','D','C','B','A' };
	for (int i{ 0 }; i < size; i++)
		grades[i] = temp[scores[i] / 10];
}

int main(void)
{
	//각각이 string형인 배열
	string names[5] = { "Georage", "John", "Luci", "Mary", "Sue" };
	int scores[5] = { 82, 73, 91, 72, 65 };
	char grades[5];

	findGrades(scores, grades, 5);
	for (int i{ 0 }; i < 5; i++)
	{
		cout << setw(10) << left << names[i] << "\t" << setw(2) << scores[i] << "\t" << setw(2) << grades[i] << endl;
	}
}