/*
int형인 밑x과 지수인 y를 입력받는다.
(이외의 값이 입력되면 do while문으로 해결)
x의 y제곱근의 계산을 cmath include하고 pow(x,y)로 계산하는데
오버플로우를 감지해 계산한다.
오버플로우가 발생하면 어디서 발생하는지 수를 출력한다.

표현가능한 최댓값 intMax저장하고 
얘랑 비교해서 
int x,y;
int intMax = numeric_limits(intMax)::max()
int intXY;
bool overFlow = 0;
while (cnt<y)
	intXY *= x;
	if (intXY>=intMax)
		cout << x << "^" << (++cnt) <<오버플로우 발생
		overFlow = 1;
		break;
	cnt++
if (!overFlow)
	cout << x << "^" << y << " = " << intXY << endl;

x의 1제곱근부터 시작해서 y까지 가는데 
초과하면 그만두고 출력하기

2의 32승 -1
32승까지 불가능.
31승까지는 가능.
*/
#include <iostream>
using namespace std;
int main(void)
{
	int x, y;
	int intMax = (std::numeric_limits<int>::max());
	int cnt=0;
	bool overFlow = 0;

	do
	{
		cout << "밑을 양의 정수로 입력해주세요: ";
		cin >> x;
	} while (x < 1);

	do
	{
		cout << "지수를 양의 정수로 입력해주세요: ";
		cin >> y;
	} while (y < 1);

	long long xyValue = 1;
	while (cnt < y) 
	{
		xyValue *= x; 
		if (xyValue >= intMax)
		{
			//cout << "if문 진입, xyValue: " << xyValue << ", intMax: " << intMax << endl;
			//컴파일 환경에 따라 정수의 최댓값이 다르다.
			//지금같은 경우 2의 31승만 되더라도 오버플로우 발생한다.
			//코드는 정상적이다.
			cout << x << "^" << (++cnt) << "에서 오버플로우가 발생했습니다." << endl;
			overFlow = 1;
			break;
		}
		cnt++;
	}

	if (!overFlow)
	{
		cout << x << "^" << y << " = " << xyValue << endl;
	}
	return 0;
}