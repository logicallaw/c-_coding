#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	int a = 10;
	int b ;
	cout << showpos << showbase << a << endl;

	//16������ ����b�� �Է¹޴´�.
	cin >> hex >> b;
	/*�⺻ ���� ����� 10�����̹Ƿ�
	* 16������ ����� ���Ѵٸ� hex ������ ����ؾ��Ѵ�.
	*/
	//���� ���� ����� hex �������� ������ �����Ƿ� �����ϰ� �ʹٸ�
	//std::resetiosflags(std::ios_base::adjustfield)�� ����ؾ��Ѵ�.
	cout << hex << b << endl;
	cout << b << endl;
	cout << resetiosflags(ios_base::basefield | ios_base::showpos) << b << endl; //������ �ʱ�ȭ�Ͽ� 10������ ����Ѵ�.

	return 0;
}