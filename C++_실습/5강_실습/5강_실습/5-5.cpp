/*
정수size의 개수를 입력받는다.
size번 정수num를 입력받는다.
7의 배수 있는지 출력한다.

int size
unsigned int num

논리
int형 size(반복문으로 양의 정수 체크)
cout << 
cin >> size
while (size<1)
	cout <<
	cin >>

bool numBool = 0;
for (unsigned int counter {0}; counter < size; counter++)
	cout 
	cin >> num
	if (num % 7 == 0)
		numBool = 1;
	(else)
*/
#include <iostream>
using namespace std;
int main(void)
{
	int size;
	unsigned int num,num7;
	bool numBool = 0;

	cout << "정수의 개수를 양의 정수로 입력하세요: ";
	cin >> size;
	while (size < 1)
	{
		cout << "양의 정수를 입력하세요: ";
		cin >> size;
	}
	cout << endl;

	for (unsigned int counter{ 0 }; counter < size; counter++)
	{
		cout << "정수를 입력해주세요: ";
		cin >> num;
		if (num % 7 == 0)
		{
			numBool = 1;
			num7 = num;
			break;
		}
	}

	cout << endl;
	if (numBool)
	{
		cout << num7 << "은/는 7로 나눌 수 있습니다." << endl;
	}
	else
	{
		cout << "7로 나눌 수 있는 숫자가 없습니다." << endl;
	}
	
	return 0;
}