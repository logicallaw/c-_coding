//built-in-array
#include <iostream>
using namespace std;
double getSum(int* p, const int& size);
double getAvg(int* p, const int& size);
double getMax(int* p, const int& size);
double getMin(int* p, const int& size);
int main(void) {
	int size;
	cout << "배열의 크기를 입력해주세요: ";
	cin >> size;
	int* pNums = new int[size];
	cout << "배열을 입력해주세요: ";
	for (int i{ 0 }; i < size; i++) 
		cin >> *(pNums + i); //pNums[i]

	string word;
	double(*p)(int*, const int&) = nullptr;
	cout << "구하려고 하는 값을 입력해주세요(sum/average/max/min): ";
	while (cin >> word) {
		bool pass = true;
		cout << endl;
		if (word == "sum")
			p = getSum;
		else if (word == "average")
			p = getAvg;
		else if (word == "max")
			p = getMax;
		else if (word == "min")
			p = getMin;
		else
		{
			pass = false;
			cout << "잘못 입력하였습니다." << endl;
		}
		if (pass)
			cout << "배열의 " << word << "은(는) " << p(pNums, size) << "입니다." << endl;
		cout << "구하려고 하는 값을 입력해주세요(sum/average/max/min): ";
	}
}
double getSum(int* p, const int& size) {
	double sum = 0;
	for (int i{ 0 }; i < size; i++)
		sum += (p)[i];
	return sum;
}

double getAvg(int* p, const int& size) {
	return getSum(p, size) / size;
}

double getMax(int* p, const int& size) {
	double max = (p)[0];
	for (int i{ 1 }; i < size; i++)
		max = (max <= (p)[i]) ? (p)[i] : max;
	return max;
}

double getMin(int* p, const int& size) {
	double min = (p)[0];
	for (int i{ 1 }; i < size; i++)
		min = (min >= (p)[i]) ? (p)[i] : min;
	return min;
}