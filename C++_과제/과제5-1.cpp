/*
승점 기준 선택
메뉴를 출력하고 동작을 선택하면 넘겨주는 함수

//메뉴 출력함수
int menu()
{
	int temp;
	cout << "동작을 선택하세요." << endl;
	cout << "1. 막기 2. 베기 3. 찌르기" << endl;
	cout << "? ";
	cin >> temp;
	return temp;
}



int main(void)
{
	int size;
	int numA, numB;
	cout << "<1999 경주 아시안 게임 여자 펜싱 사브르 결승전>" << endl;
	cout << "승점을 입력하세요: ";
	cin >> size;
	cout << endl;

	int scoreA = 0, scoreB = 0;

	while (!(scoreA == size || scoreB == size)) //승점에 도달하면 프로그램은 멈춘다.
	{
		srand(time(0));
		//메뉴함수를 실행합니다. 리턴값으로 나희도 선수의 int형 행동이 온다.
		numA = menu();

		//매번 달라지는 고유림 선수 행동을 int형으로 저장한다.
		numB= rand() % 3 + 1;
		cout << "나희도 행동: " << numA << ", 고유림 행동: " << numB << endl;

		//process함수를 사용해 점수를 매긴다.
		process(scoreA, scoreB, numA, numB);

		//process함수를 바탕으로 현재 스코어를 출력한다.
		cout << "나희도 점수: " << scoreA << ", 고유림 점수: " << scoreB << endl << endl;

	}

	if (scoreA == size)
		cout << "나희도 금메달!!";
	else
		cout << "고유림 금메달!!(ㅠㅠ)";

	return 0;
}
//입력받은 number를 바탕으로 string형 변수로 바꾸어 string형을 리턴한다.
string action(int number)
	if (number == 1)
		return "막기";
	if (number == 2)
		return "찌르기";
	else
		return "베기";

//상성을 비교해 점수를 매기는 함수이다.
void process(int& scoreA,int& scoreB, int numA, int numB)
{
	string tempA, tempB;
	int numB; //고희도 선수 int형 행동

	//나희도 선수의 행동을 판단하고 string형 tempA에 저장한다.
	tempA = action(numA);

	//고유림 선수의 행동을 tempB에 저장한다.
	numB= rand() % 3 + 1;
	tempB = action(numB);

	//나희도 선수와 고유림 선수의 행동 상성을 판단해 점수를 매긴다.
	*행동 상성은 다음과 같다.
	막기(1)>베기(2)
	찌르기(3)>막기(1)
	베기(2)>찌르기(3)

	if ((tempA == "막기" && tempB == "막기") || (tempA == "찌르기" || tempB == "찌르기") || (tempA == "베기 && tempB == "베기"))
		//점수변화X
	else if (tempA == "막기" && tempB == "찌르기")
		scoreB++;
	else if (tempA == "막기" && tempB == "베기")
		scoreA++
	else if (tempA == "찌르기" && tempB == "막기")
		scoreA++;
	else if (tempA == "찌르기" && tempB == "베기")
		scoreA++;
	else if (tempA == "베기" && tempB == "막기")
		scoreB++;
	else if (tempA == "베기" && tempB == "찌르기")
		scoreA++;
}





*/