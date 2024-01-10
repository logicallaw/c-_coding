/*
입력
string형 이름과 int형 생년월일 입력 받는다.
double형 체온과 bool형 증상 유무를 boolalpha으로 입력받는다.
신속, PCR, 음성 중 하나의 string형 문자열을 입력받는다.

출력
이름과 생년월일을 출력한다.
결과를 출력한다.

논리
열이 38도를 초과 AND 기침 증상 true면 감염의심자이다.
(만약, 열이 38도를 초과하는 것과 기침 증상 중 하나라도 false면 미감염의심자다.)
신속항원검사 OR PCR 하나라도 true면 확진자다.
감염의심자 AND 확진자 라면 확진자면 확진자다.

예제1
38.5 AND true  --> true 감염의심자
PCR true --> true 확진자
이름, 생년월일 출력

결론
감염의심자 AND 확진자 --> 확진자
미감염의심자 AND 확진자 --> 확진자
:확진자면 무조건 확진자
:확진자가 아니면 감염의심자 또는 미감염의심자
:이때, 미감염의심자면 아에 정상인.

감염의심자 AND 확진자X --> (미확진자) 감염의심자


예제2
38.5 AND true --> 감염의심자
음성 --> 확진자X
감염의심자 AND 확진자X -->false 미확진자이면서 감염의심자

예제3
36.5 AND false --> 미감염의심자
신속 -->확진자
미감염의심자 AND 확진자 --> 확진자.

예제4
38.5 AND false --> 미감염의심자
음성 -->미확진자
미감염의심자 AND 미확진자-->정상
*/

#include <iostream>
#include <iomanip>

using namespace std;
int main(void)
{
	string name;
	string resultInput;
	string coughString;
	int brithday;
	bool coughBool;
	double temperature;
	int resultTemp1, resultTemp2;

	cout << "이름과 생년월일을 입력하세요.\n? ";
	cin >> name >> brithday;

	cout << "\n체온과 기침 증상 유무(true/false)를 입력하세요.\n? ";
	cin >> temperature >> coughString;

	//coughtString을 통해 coughBool을 저장한다.
	coughBool = coughString == "true" ? 1 : 0;

	cout << "\n신속항원검사 양성: 신속, PCR 양성: PCR, 음성: 음성\n? ";
	cin >> resultInput;

	//이름과 생년월일 출력
	cout << endl << name << " " << setw(6) << right << setfill('0') << brithday << endl;

	/*
	감염의심자 판단 구문(resultTemp1)
	감염의심자면 1을, 미감염의심자면 0으로 초기화함
	*/
	resultTemp1 = (temperature > 38 && coughBool) ? 1 : 0;

	/*
	확진자 판단 구문(resultTemp2)
	확진자면 1을, 미확진자면 0으로 초기화함
	*/
	resultTemp2 = (resultInput != "음성") ? 1 : 0;

	/*
	결과 도출 구문(resultOutput)
	*/
	if (resultTemp2)
		//무조건 확진자
		cout << "확진자입니다. 격리하기 바랍니다." << endl;
	else
	{
		if (resultTemp1)
			//미확진자이자 감염의심자
			cout << "감염의심자입니다. 검사를 받으세요." << endl;
		else
			//확진도 의심자도 아닌 무조건 정상인
			cout << "감염되지 않았습니다." << endl;
	}

	return 0;
}