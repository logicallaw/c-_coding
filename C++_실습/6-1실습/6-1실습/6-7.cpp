/*
�־��� �м��� ���м��� ����� ����ϴ� ���α׷��̴�.
0�� �ƴ� ������ �и� ���ڸ� �Է¹޴´�.

�� ��� �ִ����� ��ȯ�ϴ� int GCF() �����Ѵ�.
�� ���� ������ pass-by-reference�� �̿��� N���� ������ �Լ� void div2num �����Ѵ�.
(�и�, ����, ������ �� N)

���м��� �и�� �׻� ����� ����Ѵ�.

��
-��ȣ�� ���� ���.
int m�и�, n����
int k�����¼�
int a��ȣ 

int main()
	cout << "���ڿ� �и� �Է��ϼ���: ";
	cin >> n >> m

	//��ȣ�Ǵ�, ����� ����
	bool a = 0;
	if (m * n  < 0) a = true;
	if (n<0) n = -n;
	if (m<0) m = -m
	
	//�ִ� �����
	int numGcd = GCF(n,m);

	n = a ? -n : n;

	//���м� ���
	div2num(n,m,numGcd);

	return 0;
	

int GCF(int num1, int num2) �ִ�����
	while (num2)
		temp = num2;
		num2 = num1 % num2;
		num1 = num2;
	return num1;

void div2num(int& rn, int& rm, int& rnumGcd)
	rn /= rnumGcd;
	rm /= rnumGcd;
	cout << "���м�: " << rn << "/" << rm << endl;

*/
#include <iostream>
using namespace std;

int GCF(int num1, int num2);
void div2num(int& rn, int& rm, int& rnumGcd);

int main(void)
{
	int n, m;
	cout << "���ڿ� �и� �Է��ϼ���: ";
	cin >> n >> m;

	//��ȣ�Ǵ�, ����� ����
	bool a = 0;
	if (m * n < 0) a = true;
	if (n < 0) n = -n;
	if (m < 0) m = -m;

	//�ִ� �����
	int numGcd = GCF(n, m);

	n = a ? -n : n;

	cout << numGcd << endl;

	//���м� ���
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
	cout << "���м�: " << rn << "/" << rm << endl;
}