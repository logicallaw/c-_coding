#include <iostream>
using namespace std;
int main(void)
{
	unsigned int num1 = numeric_limits<unsigned int>::max();
	unsigned int num2 = numeric_limits<unsigned int>::min();
	int num3 = 2147483647;

	cout << "부호 없는 정수의 최댓값: " << num1 << endl;
	cout << "부호 없는 정수의 최솟값: " << num2 << endl;

	num1 += 1;
	num2 -= 1;

	cout << "오버플로우가 일어난 num1 + 1: " << num1 << endl;
	cout << "언더플로우가 일어난 num2 - 1: " << num2 << endl;
	cout << "int형인 num3가 표현할 수 있는 수의 최댓값은 2147483647이고" << endl;
	cout << "여기서 num3+1을 하면 오버플로우가 발생해 int 자료형의 최솟값인 -2147483647의 값으로 출력될 것이다." << endl;
	cout << "오버플로우가 일어난 num3 + 1: " << num3 + 1 << endl;

	return 0;
}