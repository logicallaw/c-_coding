#include <iostream>
//�� ���� A�� B�� �Է¹��� ����, A/B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//C++
using namespace std;
int main(void)
{
	int a, b;
	//�� ���� a,b�� �Է¹޴´�.
	cin >> a >> b;
	//�����κ� ������ �Ҽ��κ� ��°����� ������Ų��.
	cout << fixed;
	//�Ҽ��� ���� 10��°�ڸ����� �ݿø��Ͽ� ����Ѵ�.
	cout.precision(10);
	cout << ((double)a / b) << endl;

	return 0;
}