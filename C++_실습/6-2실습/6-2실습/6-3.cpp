/*
분수의 덧셈 계산하는 프로그램이다.
최대공약수 gcd()/최소공배수 lcm()

분수 덧셈시
통분해서 더하고 마지막엔 기약분수로 나누어 출력한다.

unsigned int gcd(unsigned int n, unsigned int m);
unsigned int lcm(unsigned int a, unsigned int b);

int main(void)
{
	int n1, n2, n3, m1, m2, m3;

	cout << "Input numerator: ";
	cin >> n1;
	cout << "Input denomenator: ";
	cin >> m1;
	cout << "Input numerator: ";
	cin >> n2;
	cout << "Input denomenator: ";
	cin >> m2;

	int gcd1 = gcd(m1, m2); //최대공약수
	int lcm1= lcm(m1, m2, numGcd); //최소공배수

	//통분하기전의 분수 각각 출력한다.
	cout << endl << "fraction1 = " << n1 << "/" << m1 << endl;
	cout << "fraction2 = " << n2 << "/" << m2 << endl;

	//통분한다.
	n1 *= lcm1 / m1;
	n2 *= lcm1 / m2;

	//두 분수를 더한다.
	n3 = n1 + n2;
	m3 = lcm1;
	cout << "fraction1 + fraction2 = " << n3 << "/" << m3 << " = ";

	//기약분수를 위한 최대공약수 구한다.
	int gcd2 = gcd(n3, m3);
	n3 /= gcd2;
	m3 /= gcd2;

	//기약분수 출력한다.
	cout << n3 << "/" << m3 << endl;

}

unsigned int gcd(unsigned int n, unsigned int m)
{
	int temp;
	while(m)
	{
		temp = m;
		m = n % m;
		n = m;
	}
	return n;
}
unsigned int lcm(unsigned int a, unsigned int b, unsigned int numGcd)
{
	return a * b / numGcd;
}

*/
#include <iostream>
using namespace std;
int gcd(int n, int m);
int lcm(int a, int b, int numGcd);

int main(void)
{
	int n1, n2, n3, m1, m2, m3;

	cout << "Input numerator: ";
	cin >> n1;
	cout << "Input denomenator: ";
	cin >> m1;
	cout << "Input numerator: ";
	cin >> n2;
	cout << "Input denomenator: ";
	cin >> m2;

	int gcd1 = gcd(m1, m2); //최대공약수
	int lcm1 = lcm(m1, m2, gcd1); //최소공배수
	//통분하기전의 분수 각각 출력한다.
	cout << endl << "fraction1 = " << n1 << "/" << m1 << endl;
	cout << "fraction2 = " << n2 << "/" << m2 << endl;

	//통분한다.
	n1 *= lcm1 / m1;
	n2 *= lcm1 / m2;

	//두 분수를 더한다.
	n3 = n1 + n2;
	m3 = lcm1;
	cout << "fraction1 + fraction2 = " << n3 << "/" << m3 << " = ";

	//기약분수를 위한 최대공약수 구한다.
	int gcd2 = gcd(n3, m3);
	n3 /= gcd2;
	m3 /= gcd2;

	//기약분수 출력한다.
	cout << n3 << "/" << m3 << endl;

}

//int gcd(int n, int m)
//{
//	int temp;
//	while (m!=0)
//	{
//		temp = m;
//		m = n % m;
//		n = temp;
//	}
//	return n;
//}
int gcd(int n, int m)
{
	if (m == 0) return n;
	else return gcd(m, n % m);
}
int lcm(int a, int b, int numGcd)
{
	return (a * b / numGcd);
}