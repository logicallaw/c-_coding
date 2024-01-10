/*
int factorialR(Àç±Í)
int factorialL(¹Ýº¹¹®)
int factorialL(int number)
	int result{1};
	for (int cnt = 1; cnt <= number; cnt++)
		result *= cnt;
	return result;

int factorialR(int number)
	if (number == 1) return 1;
	else return number * factorialR(number-1);
*/
#include <iostream>
#include <ctime>
using namespace std;

int factorialR(int number);
int factorialL(int number);

int main(void)
{
	clock_t start, end;
	start = clock();
	for (int i = 0; i <= 3000; i++)
	{
		factorialR(i);
	}
	end = clock();
	cout << "factorialR time: " << end - start << endl;

	start = clock();
	for (int i = 0; i <= 3000; i++)
	{
		factorialL(i);
	}
	end = clock();
	cout << "factorialL time: " << end - start << endl;

	return 0;
}

int factorialR(int number)
{
	int result{ 1 };
	for (int cnt = 1; cnt <= number; cnt++)
		result *= cnt;
	return result;
}

int factorialL(int number)
{
	if (number <= 1) return 1;
	else return number * factorialL(number - 1);
}