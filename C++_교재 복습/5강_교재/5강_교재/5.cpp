#include <iostream>
using namespace std;
int main(void)
{
	bool boolA;
	cout << "boolA ������ ���ڸ� �Է��غ��ô�: "; // A
	cin >> boolA;

	cout << "boolA: " << boolA << endl; //boolA: 0
	cout << "typeid(boolA).name(): " << typeid(boolA).name() << endl; //typeid(boolA).name(): bool

	return 0;
}