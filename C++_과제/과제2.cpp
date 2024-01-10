#include <iostream>
#include <iomanip>
/*
이름, 수입, 지출을 각 자료형에 맞게
세번의 입력을 받고
입력 받은 값을 각 사람별 출력을 한다.
이후, 각 사람별 잔액을 세번 출력하고
마지막에 3으로 나누어 double형 타입으로 소수점이하 세자리까지 고정소수점으로 출력한다.
*/

using namespace std;
int main(void)
{
	//이 프로그램은 정해진 9개의 변수와 각 세가지의 자료형만 사용함을 가정한다.
	string name1, name2, name3;
	unsigned int plus1, plus2, plus3;
	int minus1, minus2, minus3;

	/*
	이름은 띄어쓰기 없이 알파벳 10글자 이내로 한 단어 입력됨을 가정한다.
	수입과 지출은 각 자료형에 맞게 정상적인 숫자가 입력된다.
	수입은 양수, 지출은 음수로 정상적으로 입력된다.
	단, 수입과 지출은 99,999원 이내의 금액만 입력받는다.
	*/

	//사용자로부터 세번의 입력을 받는다.
	cout << "이름, 수입, 지출: ";
	cin >> name1 >> plus1 >> minus1;
	cout << "이름, 수입, 지출: ";
	cin >> name2 >> plus2 >> minus2;
	cout << "이름, 수입, 지출: ";
	cin >> name3 >> plus3 >> minus3;

	//이름과 수입, 지출을 각 형식에 맞게 출력한다.
	//다음 출력 형식은 setw() 너비를 조정해 동일한 형식으로 출력한다.
	cout << endl << setw(10) << left << "이름" << setw(5) << right << "수입" << setw(10) << right <<"지출" << endl;
	cout << setw(10) << left <<name1 << setw(5) << right << plus1 << setw(10) << right << minus1 << endl;
	cout << setw(10) << left << name2 << setw(5) << right << plus2 << setw(10) << right <<  minus2 << endl;
	cout << setw(10) << left << name3 << setw(5) << right << plus3 << setw(10) << right << minus3 << endl;

	//세 사람의 잔액을 계산해 세줄에 걸쳐서 출력한다.
	//잔액=plus(unsigned int) + minus(int) --> (double) + (int) = (double)
	/*
	여기서, plus의 자료형을 double으로 바꾸는 이유
	:바로 계산하면 minus의 int는 unsigned int로 암시적 형변환 되므로 정수 계산이 안된다.
	따라서, plus를 데이터 손실없이 double형으로 변환후 double + int 계산하면 손실없이 정수 계산이 가능해진다.
	*/
	cout << "\n잔액 = " << (static_cast<double>(plus1) + minus1) << " (" << name1 << ")" << endl;
	cout << "잔액 = " << (static_cast<double>(plus2) + minus2) << " (" << name2 << ")" << endl;
	cout << "잔액 = " << (static_cast<double>(plus3) + minus3) << " (" << name3 << ")" << endl;
	
	//세 사람의 평균 잔액을 계산한다.
	cout << "\n평균 잔액 = " << fixed << setprecision(3) << (static_cast<double>(plus1) + static_cast<double>(plus2) + static_cast<double>(plus3) + minus1 + minus2 + minus3) / 3.0 << endl;

	return 0;

}