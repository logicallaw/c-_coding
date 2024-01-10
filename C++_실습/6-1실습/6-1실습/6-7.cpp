/*
주어진 분수를 기약분수로 만들어 출력하는 프로그램이다.
0이 아닌 정수를 분모 분자를 입력받는다.

두 양수 최대공약수 반환하는 int GCF() 정의한다.
두 개의 변수를 pass-by-reference를 이용해 N으로 나누는 함수 void div2num 정의한다.
(분모, 분자, 나누는 수 N)

기약분수의 분모는 항상 양수로 출력한다.

논리
-부호는 따로 출력.
int m분모, n분자
int k나누는수
int a부호 

int main()
	cout << "분자와 분모를 입력하세요: ";
	cin >> n >> m

	//부호판단, 양수로 저장
	bool a = 0;
	if (m * n  < 0) a = true;
	if (n<0) n = -n;
	if (m<0) m = -m
	
	//최대 공약수
	int numGcd = GCF(n,m);

	n = a ? -n : n;

	//기약분수 출력
	div2num(n,m,numGcd);

	return 0;
	

int GCF(int num1, int num2) 최대공약수
	while (num2)
		temp = num2;
		num2 = num1 % num2;
		num1 = num2;
	return num1;

void div2num(int& rn, int& rm, int& rnumGcd)
	rn /= rnumGcd;
	rm /= rnumGcd;
	cout << "기약분수: " << rn << "/" << rm << endl;

*/
#include <iostream>
using namespace std;

int GCF(int num1, int num2);
void div2num(int& rn, int& rm, int& rnumGcd);

int main(void)
{
	int n, m;
	cout << "분자와 분모를 입력하세요: ";
	cin >> n >> m;

	//부호판단, 양수로 저장
	bool a = 0;
	if (m * n < 0) a = true;
	if (n < 0) n = -n;
	if (m < 0) m = -m;

	//최대 공약수
	int numGcd = GCF(n, m);

	n = a ? -n : n;

	cout << numGcd << endl;

	//기약분수 출력
	div2num(n, m, numGcd);

	return 0;
}

int GCF(int num1, int num2)
{
	int temp;
	while (num2)
	{
		temp = num2;
		num2 = num1 % num2;
		num1 = temp; 
	}
	return num1;
}

void div2num(int& rn, int& rm, int& rnumGcd)
{
	rn /= rnumGcd;
	rm /= rnumGcd;
	cout << "기약분수: " << rn << "/" << rm << endl;
}