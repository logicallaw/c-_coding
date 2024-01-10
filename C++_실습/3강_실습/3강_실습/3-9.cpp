#include <iostream>
using namespace std;
int main(void)
{
	unsigned int pcs, backs = 4;

	cout << "노트북의 개수를 입력하세요: ";
	cin >> pcs;

	cout << "필요한 가방의 수: " << (pcs / backs) + 1 << endl;

	return 0;
}