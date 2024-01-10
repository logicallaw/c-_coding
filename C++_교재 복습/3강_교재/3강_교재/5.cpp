#include <iostream>
using namespace std;
int main(void)
{
	double num1 = numeric_limits<double>::max();
	double num2 = numeric_limits<double>::lowest();
	cout << "double형의 최댓값: " << num1 << endl;
	cout << "double형의 최솟값: " << num2 << endl;

	num1 *= 1000.0;
	num2 *= 1000.0;

	cout << "오버플로우가 일어난 num1 * 1000의 값: " << num1 << endl;
	cout << "언더플로우가 일어난 num2 * 1000의 값: " << num2 << endl;

	return 0;
}