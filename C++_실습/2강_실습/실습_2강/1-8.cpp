#include <iostream>
//���ĺ� �ҹ��ڸ� �빮�ڷ� ����Ѵ�.
using namespace std;
int main(void)
{
	char a;
	char b;
	cout << "�ҹ��� ���ĺ��� �Է��ϼ���: ";
	cin >> a;
	//�ҹ��ڿ��� �빮�ڰ� �� 32��ŭ ���ָ� �ȴ�.
	b = a - 32;
	cout << "�빮�ڷ� ��ȯ�� ���: " << b << endl;

	return 0;
}