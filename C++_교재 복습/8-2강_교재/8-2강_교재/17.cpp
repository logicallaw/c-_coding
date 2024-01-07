#include <iostream>
#include <iomanip>
using namespace std;

void findStudentAverage(const int scores[][3], double stdAver[], int rowSize, int colSize) {
	for (int i{ 0 }; i < rowSize; i++) {
		int sum = 0;
		for (int j{ 0 }; j < colSize; j++) {
			sum += scores[i][j];
		}
		double average = static_cast<double>(sum) / colSize;
		stdAver[i] = average;
	}
}

void findTestAverage(const int scores[][3], double tstAver[], int rowSize, int colSize) {
	for (int j{ 0 }; j < colSize; j++) {
		int sum = 0;
		for (int i{ 0 }; i < rowSize; i++) {
			sum += scores[i][j];
		}
		double average = static_cast<double>(sum) / rowSize;
		tstAver[j] = average;
	}
}

int main(void) {
	const int rowSize = 5;
	const int colSize = 3;
	int scores[rowSize][colSize] = {
		{82,65,72},
		{73,70,80},
		{91,67,40},
		{72,72,68},
		{65,90,80}
	};
	double stdAver[rowSize];
	double tstAver[colSize];

	findStudentAverage(scores, stdAver, rowSize, colSize);
	findTestAverage(scores, tstAver, rowSize, colSize);
	cout << "-----------------------------------------------" << endl;
	for (size_t i{ 0 }; i < rowSize; i++) {
		for (size_t j{ 0 }; j < colSize; j++) {
			cout << setw(6) << scores[i][j];
		}
		cout << fixed << setprecision(2) << "    " << stdAver[i] << endl;
	}
	cout << "-----------------------------------------------" << endl;
	for (size_t j = 0; j < colSize; j++) {
		cout << fixed << setprecision(2) << setw(6) << tstAver[j];
	}
	cout << endl;
}