#include <iostream>
using namespace std;
int main(void)
{
	int cnt = 0;
	while (cnt < 30)
	{
		if (cnt == 15)
		{
			cnt++;
			break; //break:이후코드 실행안하고 다시 올라가지 않고 while문 강제종료
		}
		cout << (cnt++) << endl;
	}
	cout << "while문이 종료되었습니다." << endl;
	return 0;
}