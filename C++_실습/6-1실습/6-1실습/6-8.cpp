/*
가위바위보 프로그램
자연수 numWin이 입력된다.
두 사람이 가위바위보를 하는데 
승패 결정하는 game()를 정의한다.
매판마다 결과와 현재점수를 출력한다.
이겨야하는 num횟수가 도달되면 while문 종료된다.(이기는 사람 존재하면 종료이벤트 발생)
게임이 시작되고 처음 time(0)과 끝나는 time(0)간의 초를 계산해 빼준다.(출력은 초)
unsigned int counter 판의 횟수/매번 출력,매번 카운트
unsigned int numA, numB 입력되는 값/이 값을 출력
unsigned int scoreA, scoreB 이긴 횟수 각각 저장/매번 출력.

int main(void)

cout >> numWin; // 자연수 입력
unsigned int scoreA = 0, scoreB = 0
	
while (!(scoreA == numWin || scoreB == numWin)) // 이기는 사람이 존재하면 while문은 종료한다.
	cin >> numA >> numB

	//승패를 결정해 스코어를 갱신하고 이긴사람과 현재점수를 출력한다.
	temp = game(numA, numB);
	if (temp) 
		scoreA++;
		cout << A가 이김
		cout << 현재 점수 << scoreA << scoreB;
	else scoreB++;
	
//종료 이벤트
if (scoreA == numWin) cout << 최종승자는 A;
else cout << 최종승자는 B;

int game(unsigned int& a, unsigned int& b)
	string str1, str2;
	if (a == 1) str1 = "가위";
	else if (a == 2) str1 = "바위";
	else str1 = "보";
	
	if (b == 1) str2 = "가위";
	else if (b == 2) str2 = "바위";
	else str2 = "보";

	if ((str1 == "가위" && str2 == "바위")||(str1 == "바위" && str2 == "보")||(str1 == "보" && str2 == "가위")) return 0; //B가 이기면 0
	else if ((str1 == "가위" && str2 == "보")||(str1 == "바위" && str2 == "가위")||(str1 == "보" && str2 == "바위")) return 1; //A가 이기면 1
	else return 2;
	
	//else if ((str1 == "가위" && str2 == "가위") || (str1 == "바위" && str2 == "바위") || (str1 == "보" && str2 == "보")) return 2; //비기면 2

	//매판 승패 여부를 판단하는 함수
	//두 사람의 가위바위보를 매개변수로 갖는다.
	//알고리즘에 따라 이긴 사람을 리턴한다.
	//리턴값은 1은 a가 이긴거, 0은 b가 이긴거
	바위 > 가위
	바위 < 보
	가위 > 보
	가위1  바위2  보3
	return 

*/

#include <iostream>
#include <ctime>
using namespace std;
unsigned int game(unsigned int& a, unsigned int& b);
int main(void)
{
	unsigned int numWin; //자연수
	unsigned int scoreA = 0, scoreB = 0; //default:0
	unsigned int numA, numB;
	unsigned int counter = 0;
	long startTime, endTime;
	startTime = time(0);
	cout << "이겨야 하는 판수를 입력해주세요: ";
	cin >> numWin;


	while (!(scoreA == numWin || scoreB == numWin)) //이기는 사람이 존재하면 while문은 종료한다.
	{
		cout << "A와 B의 선택을 입력하세요(가위: 1, 바위: 2, 보: 3)." << endl;

		cout << (++counter) << "번째 판입니다 : ";
		cin >> numA >> numB;

		//승패를 결정해 스코어를 갱신하고 이긴사람과 현재점수를 출력한다.
		int temp = game(numA, numB);
		if (temp == 0)
		{
			++scoreB;
			cout << "B가 이겼습니다. 현재 점수는 A " << scoreA << ":" << scoreB << " B 입니다." << endl;
		}
		else if (temp == 1)
		{
			++scoreA;
			cout << "A가 이겼습니다. 현재 점수는 A " << scoreA << ":" << scoreB << " B 입니다." << endl;
		}
		else
		{
			cout << "비겼습니다. 현재 점수는 A " << scoreA << ":" << scoreB << " B 입니다." << endl;
		}
	}
	endTime = time(0);
	cout << endl;
	if (scoreA == numWin) cout << "최종 승자는 A입니다. 게임을 진행한 시간은 " << endTime - startTime << "초 입니다." << endl;
	return 0;
}
unsigned int game(unsigned int& a, unsigned int& b)
{
	string str1, str2;
	if (a == 1) str1 = "가위";
	else if (a == 2) str1 = "바위";
	else str1 = "보";

	if (b == 1) str2 = "가위";
	else if (b == 2) str2 = "바위";
	else str2 = "보";

	if ((str1 == "가위" && str2 == "바위") || (str1 == "바위" && str2 == "보") || (str1 == "보" && str2 == "가위")) return 0; //B가 이기면 0
	else if ((str1 == "가위" && str2 == "보") || (str1 == "바위" && str2 == "가위") || (str1 == "보" && str2 == "바위")) return 1; //A가 이기면 1
	else return 2;
}