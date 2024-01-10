/*
int size;
unsigned int num;

int형 입력받을 정수의 개수size 입력받는다.
(예외:do~while문)
size에 따라 for문 실행
가장 큰값numMax과 작은값numMin 출력
if (!(counter))
		unsigned int numMax = num, numMin = num;
for (unsigned int counter {0} ; counter < size ; counter++)
	cout << "정수를 입력하세요: " << endl;
	cin >> num;
	if (!(counter)) //처음시행만 실행
		unsigned int numMax = num, numMin = num;
	numMax = (numMax >= num) ? numMax : num;
	numMin = (numMin <= num) ? numMin : num;

*/
#include <iostream>
using namespace std;
int main(void)
{
	int size;
	unsigned int num, numMax, numMin; 
	do
	{
		cout << "정수의 개수를 양의 정수로 입력하세요: ";
		cin >> size;
	} while (size < 1);

	cout << endl;

	for (unsigned int counter{ 0 }; counter < size; counter++)
	{
		cout << "정수를 입력하세요: ";
		cin >> num;
		if (counter == 0) //처음시행만 실행
		{
			numMax = num;
			numMin = num;
		}
		numMax = (numMax >= num) ? numMax : num;
		numMin = (numMin <= num) ? numMin : num;
	}

	cout << "\n최댓값 = " << numMax;
	cout << "\n최솟값 = " << numMin;

	return 0;
}