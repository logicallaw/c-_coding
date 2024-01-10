#include <iostream>
//사용자 정보를 입력받고 출력하는 프로그램이다.
using namespace std;
int main(void)
{
	char name[50]; //문자열 상수
	unsigned int age, glasses; //양수인 나이,안경여부
	double eyeL, eyeR; 
	cout << "이름을 입력해주세요: ";
	cin >> name;
	cout << "나이를 입력해주세요: ";
	cin >> age;
	cout << "왼쪽 시력을 입력해주세요: ";
	cin >> eyeL;
	cout << "오른쪽 시력을 입력해주세요: ";
	cin >> eyeR;
	cout << "안경 착용여부를 입력해주세요(True : 1 / False : 0): ";
	cin >> glasses;

	cout << endl;
	cout << "이름: " << name << endl;
	cout << "나이: " << age << endl;
	cout << "왼쪽 시력 : " << eyeL << endl;
	cout << "오른쪽 시력 : " << eyeR << endl;
	cout << "안경 착용여부: " << glasses << endl;

	return 0;

}