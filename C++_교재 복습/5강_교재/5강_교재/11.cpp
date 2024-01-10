#include <iostream>
#include <iomanip>
using namespace std;
/*
카운터변수
7의 배수 출력
1부터 300까지
한줄에 10개까지 출력
*/
int main(void)
{
	unsigned int num;
	unsigned int e=0;
	cout << "양의 정수를 입력해주세요: ";
	cin >> num;

	for (unsigned int cnt = 1; cnt < 300; cnt++)
	{
		if (cnt % num == 0)
		{
			cout << setw(4) << right << cnt;
			e++; //e += 1 or ++e 가능
			if (e == 10)
			{
				cout << endl;
				e = 0;
			}
		}
	}
	return 0;
}