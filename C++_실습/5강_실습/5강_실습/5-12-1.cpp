#include <iostream>
using namespace std;
int main(void)
{
	int num;
	cout << "양의 정수를 입력하세요(종료는 -1): ";
	int result;
	while (cin >> num && num != -1) //입력된 값과 동시에 더 이상할지 안할지 결정.
	{
		result = 0;
		while(num) { //나머지를 바탕으로 10을 순서대로 곱해 자리수를 이동시킨다.
			result *= 10; // 20 210
			result += num % 10; //2 21 215
			num /= 10; //51 5 0
		}
		cout << "뒤집은 결과: " << result << endl;
		cout << "다음 양의 정수를 입력하세요(종료는 -1): ";
	}
}