/*
재귀 피보나치 함수
int fibR(int n)
if (n==0 || n == 1) return n;
else return fib(n-2) + fib(n-1);

반복문 피보나치 함수
int fibL(int n)
	if (n==0 || n==1) return n;
	int result = 0,	f1=1, f0=0;
	for (i{2};i<=number;i++)
		result = f1+f2;
		f2=f1;
		f1=result;
	return result;
*/
#include <iostream>
#include <ctime>
using namespace std;

int fibR(int num); //재귀함수
int fibL(int num); //반복문

int main(void)
{
	clock_t start, end;
	int number;
	cout << "f(0)~f(?): ";
	cin >> number;
	start = clock();
	for (int cnt{ 0 }; cnt <= number; cnt++)
	{
		fibR(cnt);
	}
	end = clock();
	cout << endl << "f(0)~f(" << number << ") fiboR time : " << end - start << endl;

	start = clock();
	for (int cnt{ 0 }; cnt <= number; cnt++)
	{
		fibL(cnt);
	}
	end = clock();
	cout << "f(0)~f(" << number << ") fiboL time : " << end - start << endl;

	return 0;

}

int fibR(int num)
{
	if (num == 0 || num == 1) return num;
	else return fibR(num - 2) + fibR(num - 1);
}

int fibL(int num)
{
	if (num == 0 || num == 1) return num;
	int temp, pref = 0, currf = 1; //
	for (int cnt = 2; cnt <= num; cnt++)
	{
		temp = currf; //현재값 임시저장
		currf += pref; //현재+이전값;리턴값
		pref = temp; //이전값=현재값
	}
	return currf;
}