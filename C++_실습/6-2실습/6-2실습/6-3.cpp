/*
�м��� ���� ����ϴ� ���α׷��̴�.
�ִ����� gcd()/�ּҰ���� lcm()

�м� ������
����ؼ� ���ϰ� �������� ���м��� ������ ����Ѵ�.

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

	int gcd1 = gcd(m1, m2); //�ִ�����
	int lcm1= lcm(m1, m2, numGcd); //�ּҰ����

	//����ϱ����� �м� ���� ����Ѵ�.
	cout << endl << "fraction1 = " << n1 << "/" << m1 << endl;
	cout << "fraction2 = " << n2 << "/" << m2 << endl;

	//����Ѵ�.
	n1 *= lcm1 / m1;
	n2 *= lcm1 / m2;

	//�� �м��� ���Ѵ�.
	n3 = n1 + n2;
	m3 = lcm1;
	cout << "fraction1 + fraction2 = " << n3 << "/" << m3 << " = ";

	//���м��� ���� �ִ����� ���Ѵ�.
	int gcd2 = gcd(n3, m3);
	n3 /= gcd2;
	m3 /= gcd2;

	//���м� ����Ѵ�.
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

	int gcd1 = gcd(m1, m2); //�ִ�����
	int lcm1 = lcm(m1, m2, gcd1); //�ּҰ����
	//����ϱ����� �м� ���� ����Ѵ�.
	cout << endl << "fraction1 = " << n1 << "/" << m1 << endl;
	cout << "fraction2 = " << n2 << "/" << m2 << endl;

	//����Ѵ�.
	n1 *= lcm1 / m1;
	n2 *= lcm1 / m2;

	//�� �м��� ���Ѵ�.
	n3 = n1 + n2;
	m3 = lcm1;
	cout << "fraction1 + fraction2 = " << n3 << "/" << m3 << " = ";

	//���м��� ���� �ִ����� ���Ѵ�.
	int gcd2 = gcd(n3, m3);
	n3 /= gcd2;
	m3 /= gcd2;

	//���м� ����Ѵ�.
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