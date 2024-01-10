#include <iostream>
using namespace std;

void useLocal();
void useStaticLocal();
void useGlobal();

int x{ 1 }; //���� ���� ����

int main(void)
{
	cout << "global x in main is " << x << endl; //���� ��� ���� ���� ���̶� ���� ���� ������
	int x{ 5 };
	cout << "local x in main is " << x << endl; //���� ��� �ߺ��̸� �����ؼ� ���� ���� �Ȱ�����
	{
		int x{ 7 };
		cout << "local x in main is " << x << endl; //���� �������� ���� 7�� ��µ�.
	}
	cout << "local x in main is " << x << endl; //5�� ��µ�

	useGlobal();
	useStaticLocal();
	useGlobal();
	useLocal();
	useStaticLocal();
	useGlobal();

	cout << "\nlocal x in main is " << x << endl;
	return 0;
}

void useLocal()
{
	int x{ 5 };
	cout << "\nlocal x is " << x << endl; // 5
	++x;
	cout << "local x is " << x << endl;
}

void useStaticLocal() //�� �Լ� ���ο����� 50���� ���
{
	static int x{ 50 };
	cout << "\nlocal static x is " << x << " on entering useStaticLocal" << endl;
	++x;
	cout << "\nlocal static x is " << x << " on entering useStaticLocal" << endl;
}

void useGlobal() //�������� 1�� ������
{
	cout << "\nglobal x is " << x << " on entering useGlobal" << endl;
	x *= 10;
	cout << "\nglobal x is " << x << " on entering useGlobal" << endl;
}