/*
4의 배수가 입력된다.
해당 수만큼 long을 출력하면 된다.
unsigned int num;
for (cnt;cnt<num;cnt *= 4;)
*/
#include <iostream>
using namespace std;
int main(void)
{
	unsigned int num;
	cin >> num;
	for (unsigned int cnt{ 4 }; cnt <= num; cnt += 4)
	{
		cout << "long ";
	}
	cout << "int";

	return 0;
}