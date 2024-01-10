#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
	double pi = 3.1415922653;
	double test = 1234.1234;
	double x = 1237234.1235;
	double y = 1234.323232;
	int num = -14;
	bool z = 1;

	/*
	������ ���� ���ǻ���
	:�����ڸ� �ѹ� ����ϱ� �����ϸ�
	�� ���� ��� �ڵ忡 �����ڰ� ����Ǿ� ��µȴ�.
	����, �����ڸ� ����ϱ� ��ġ ������ ������ �ʱ�ȭ�ؾ��Ѵ�.
	������ �����ڸ� �ʱ�ȭ�ϴ� �ڵ��̴�.
	std::resetiosflags(std::ios_base::adjustfield)
	*/
	/*
	���� ��α�:
	https://velog.io/@mohadang/C-Manipulator%EC%A1%B0%EC%A0%95%EC%9E%90
	*/

	//scientific:����ǥ������� ���
	//�Ҽ����Ʒ� 6�ڸ����� �⺻������ ���
	cout << scientific << pi << endl; //3.141592e+00

	//�⺻ ����� ��ȿ���� 6������.
	//�ڿ� �Ҽ��� ����ؾ��Ѵٸ� ����ǥ��� ��ȯ�� ��ȿ���� 6�� �����.
	cout << "x:" << x << endl; //1.23723e+06
	cout << "y:" << y << endl; //1234.32
	cout << "pi:" << pi << endl; //1234.12
	cout << "test:" << test << endl; //1234.12

	//setw()�����ڴ� ��� ĭ���� �����Ѵ�.
	//�⺻ pi ũ��� 7ĭ. �������� setw()���� �տ� �������� ä���.
	//setfill()���� ���� ��� ���� ���ڻ���� ĭ�� ä���.
	cout << "setw(10):" << setw(10) << pi << endl; //   3.14159
	cout << "setfill('*') and setw(10):" << setfill('*') << setw(8) << pi << endl; //*3.14159

	//showbase�� ������ ��Ȯ�� ǥ���Ѵ�.
	//�⺻���� noshowbase�̴�.
	cout << "showbase oct num:" << showbase << oct << num << endl;
	cout << "noshowbase oct num:" << noshowbase << oct << num << endl;
	cout << "oct num:" << oct << num << endl;

	//left:���� ����, internal:��ȣ�� ���ڻ��̿� ������ �߰��Ǿ� ����, right:������ ����
	cout << setw(10) << left << num << endl;
	cout << setw(10) << internal << num << endl;
	cout << setw(10) << right << num << endl;

	//boolalpha
	cout << boolalpha << z << endl; //true

	//fixed�ϸ� ����ǥ��� ��ȯ ���ϰ� �Ҽ������� 6�ڸ����� ��� ǥ����.
	cout << "fixed and x:" << fixed << x << endl; //1237234.123500
	cout << "fixed and y:" << fixed << y << endl; //1234.323232
	cout << "fixed and pi:" << fixed << pi << endl; //3.141592

	return 0;
}