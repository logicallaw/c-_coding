#include <iostream>
//�ε��Ҽ����� �����ϴ� ���α׷��� �ۼ��Ѵ�.
//double���� �ε��Ҽ����� �Է¹ް� �����κа� �Ҽ��κ����� �и��Ͽ� ���� ����Ѵ�.
using namespace std;
int main(void)
{
	double num;
	int inum;
	double dnum;
	cout << "�ε� �Ҽ��� �Է�: ";
	cin >> num;

	cout << endl;
	//�����κ�
	inum = (int)num;
	//�Ҽ��κ�
	dnum = num - inum;
	
	//������, �����κ�, �Ҽ��κ� ���� ����Ѵ�.
	cout << "���� ��: " << num << endl;
	cout << "���� �κ�: " << inum << endl;
	cout << "�Ҽ� �Ʒ� �κ�: " << dnum << endl;

	return 0;
}
/*
1.�ε� �Ҽ����̶�?
�Ҽ����� �����Ǿ� ���� �ʰ�, ����ǥ������� ��Ÿ�� �Ҽ��� �ǹ��Ѵ�.
*/