#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
	/*
	각 세명에 대한
	이름, 생년월일, 온도, 기침을 선언하고
	default가 필요한 값들은 초기화도 해준다.(default:0)
	*/
	string name1 = "noname", name2 = "noname", name3 = "noname";
	int bir1 = 220101, bir2 = 220101, bir3 = 220101;
	double heat1 = 0, heat2 = 0, heat3 = 0;
	bool cough1, cough2, cough3;

	/*각 세명에 대한
	감염의심자 여부를 담을 변수를 선언 및 초기화한다.(default:0)
	*/
	int suspect1 = 0, suspect2 = 0, suspect3 = 0;

	/*각 세명에 대한
	확진자 여부를 담을 변수를 선언 및 초기화한다. (default:0)
	*/
	int infected1 = 0, infected2 = 0, infected3 = 0;
	
	/*각 세명에 대한 
	4번이 출력되면 중복출력을 방지하기 위해 이를 구분할
	bool변수를 선언 및 초기화한다.
	bool값이 1이면 이미 출력된 사람, 0이면 아직 미출력 사람이다.
	*/
	bool result1 = 0, result2 = 0, result3 = 0;

	/*
	반복문과 조건문에 사용될 카운터변수를
	선언하고 초기화해준다.
	*/
	int endCounter = 0, nameCounter = 0, heatCounter = 0, resultCounter = 0;

	/*
	반복문과 조건문에 사용될 임시저장변수를
	선언한다.
	여기서, tempResult1 변수는 CASE 2번에 대한 임시저장변수,
	tempResult2 변수는 CASE 3번에 대한 임시저장변수를 의미한다.
	또한, tempResultInput은 CASE 3번에 대한 입력 값을 받고
	확진자 여부를 판단해 tempResult2 변수에 값을 저장한다.
	*/
	string tempName;
	int tempBirth;
	double tempHeat;
	bool tempCough;
	int tempResult1;
	string tempResultInput;
	int tempResult2;
	/*
	프로그램 논리 구조(작동 원리)
	1.프로그램을 작동시킬 while문과 그 안에 메뉴를 담은 switch문이 존재한다.
	2.각 케이스마다 for문이 사용되어
	  먼저 기존의 값이 존재하는지 여부를 판단하고
	  기존 값이 존재하지 않으면 순차적으로 사람별로 각 정보를 저장한다.
	3.endCounter가 3이 되면 프로그램은 종료된다.
	*/
	while (endCounter < 3)
	{
		int num;
		do
		{
			cout << "1. 신상 정보 입력" << endl;
			cout << "2. 의심 증상이 있는 경우" << endl;
			cout << "3. 코로나 검사를 받은 경우" << endl;
			cout << "4. 결과 출력" << endl << "? ";
			cin >> num;
			if (num < 1 || num > 4)
			{
				cout << endl << "잘못된 입력입니다." << endl;
			}
		} while (num < 1 || num > 4);

		switch (num) {
		case 1:
			nameCounter += 1;
			cout << endl << "이름과 생년월일을 입력하세요." << endl << "? ";
			cin >> tempName >> tempBirth;
			cout << endl;
			/*
			for문을 사용하여
			먼저 기존의 값이 존재하는지 여부를 판단하고
			기존 값이 존재하지 않으면 순차적으로 사람별로 각 정보를 저장한다.
			*/
			for (unsigned int cntCase1{ 0 }; cntCase1 < nameCounter; cntCase1++)
			{
				if (tempName == name1 || tempName == name2 || tempName == name3)
				{
					//이미 저장된 값이 존재해 이후 실행 중단
					nameCounter--;
					break;
				}
				if (cntCase1 == 0 && nameCounter == 1)
				{
					//name1에 입력된 이름과 생일 저장
					name1 = tempName;
					bir1 = tempBirth;
					break;
				}
				else if (cntCase1 == 1 && nameCounter == 2)
				{
					//name2에 입력된 이름과 생일 저장
					name2 = tempName;
					bir2 = tempBirth;
					break;
				}
				else if (cntCase1 == 2 && nameCounter == 3)
				{
					//name3에 입력된 이름과 생일 저장
					name3 = tempName;
					bir3 = tempBirth;
					break;
				}
			}
			//cout << name1 << " " << name2 << " " << name3 << endl;
			break;
		case 2:
			heatCounter += 1;
			cout << endl << "체온과 기침 증상 유무(true/false)를 입력하세요." << endl << "? ";
			cin >> tempHeat >> boolalpha >> tempCough;
			cout << endl;
			for (unsigned int cntCase2{ 0 }; cntCase2 < heatCounter; cntCase2++)
			{
				if (tempHeat == heat1 || tempHeat == heat2 || tempHeat == heat3)
				{
					heatCounter--;
					break;
				}
				if (cntCase2 == 0 && heatCounter == 1)
				{
					tempResult1 = (tempHeat > 38 && tempCough) ? 1 : 0;
					suspect1 = tempResult1;
					//cout << "cnt = 0, suspect1: " << suspect1 << endl;
					break;
				}
				else if (cntCase2 == 1 && heatCounter == 2)
				{
					tempResult1 = (tempHeat > 38 && tempCough) ? 1 : 0;
					suspect2 = tempResult1;
					//cout << "cnt = 1, suspect2: " << suspect2 <<endl;
					break;
				}
				else if (cntCase2 == 2 && heatCounter == 3)
				{
					tempResult1 = (tempHeat > 38 && tempCough) ? 1 : 0;
					suspect3 = tempResult1;
					//cout << "cnt = 2, suspect3: " << suspect3 << endl;
					break;
				}
			}
			break;
		case 3:
			resultCounter += 1;
			cout << endl << "신속항원검사 양성: 신속, PCR 양성: PCR, 음성: 음성" << endl << "? ";
			cin >> tempResultInput;
			cout << endl;
			tempResult2 = (tempResultInput != "음성") ? 1 : 0;
			for (unsigned int cntCase3{ 0 }; cntCase3 < resultCounter; cntCase3++)
			{
				/*
				두번째 정상됨. 첫번째 안됨.
				
				*/
				if (cntCase3 == 0 && resultCounter == 1)
				{
					infected1 = tempResult2;
					break;
				}
				else if (cntCase3 == 1 && resultCounter == 2)
				{
					infected2 = tempResult2;
					break;
				}
				else if (cntCase3 == 2 && resultCounter == 3)
				{
					infected3 = tempResult2;
					break;
				}
			}
			break;
		case 4:
			/*
			CASE 4번 규칙
			1.입력된 순서와 상관없이 감염의심자 판정을 받은 사람이 4번 출력 우선순위이다.
			2.bool값을 세 사람한테 줌으로서 4번 if문 중복 출력을 방지한다.
			3.미감염의심자면 두가지 경우의 수밖에 없다. 확진자 아니면 정상인.
			4.각각 문구 출력할 때 이름과 생년월일도 출력해야한다.
			*/
			if (suspect1 == 1 || suspect2 == 1 || suspect3 == 1)
			{
				//name1
				if (suspect1 == 1 && result1 == 0)
				{
					if (infected1 == 1)
					{
						cout << endl << name1 << " " << setw(6) << setfill('0') << bir1 << endl;
						cout << "확진자입니다. 격리하기 바랍니다." << endl << endl;
						result1 = 1;
						suspect1 = 0;
						endCounter++;
						break;
					}
					else
					{
						cout << endl << name1 << " " << setw(6) << setfill('0') << bir1 << endl;
						cout << "감염의심자입니다. 검사를 받으세요." << endl << endl;
						result1 = 1;
						suspect1 = 0;
						endCounter++;
					}
				}
				//name2
				if (suspect2 == 1 && result2 == 0)
				{
					if (infected2 == 1)
					{
						cout << endl << name2 << " " << setw(6) << setfill('0') << bir2 << endl;
						cout << "확진자입니다. 격리하기 바랍니다." << endl << endl;
						result2 = 1;
						suspect2 = 0;
						endCounter++;
						break;
					}
					else
					{
						cout << endl << name2 << " " << setw(6) << setfill('0') << bir2 << endl;
						cout << "감염의심자입니다. 검사를 받으세요." << endl << endl;
						result2 = 1;
						suspect2 = 0;
						resultCounter--; //2번O 3번X, 2번O 3번X
						endCounter++;
						break;
					}
				}
				//name3
				if (suspect3 == 1 && result3 == 0)
				{
					if (infected3 == 1)
					{
						cout << endl << name3 << " " << setw(6) << setfill('0') << bir3 << endl;
						cout << "확진자입니다. 격리하기 바랍니다." << endl << endl;
						result3 = 1;
						suspect3 = 0;
						endCounter++;
						break;
					}
					else
					{
						cout << endl << name3 << " " << setw(6) << setfill('0') << bir3 << endl;
						cout << "감염의심자입니다. 검사를 받으세요." << endl << endl;
						result3 = 1;
						suspect3 = 0;
						endCounter++;
						break;
					}
				}
			}
			else
			{
				//name1
				if (infected1 == 1 && result1 == 0)
				{
					cout << endl << name1 << " " << setw(6) << setfill('0') << bir1 << endl;
					cout << "확진자입니다. 격리하기 바랍니다." << endl << endl;
					result1 = 1;
					endCounter++;
					break;
				}
				else if (infected1 == 0 && result1 == 0)
				{
					cout << endl << name1 << " " << setw(6) << setfill('0') << bir1 << endl;
					cout << "감염되지 않았습니다." << endl << endl;
					result1 = 1;
					endCounter++;
					break;
				}
				//name2
				if (infected2 == 1 && result2 == 0)
				{
					cout << endl << name2 << " " << setw(6) << setfill('0') << bir2 << endl;
					cout << "확진자입니다. 격리하기 바랍니다." << endl << endl;
					result2 = 1;
					endCounter++;
					break;
				}
				else if (infected2 == 0 && result2 == 0)
				{
					cout << endl << name2 << " " << setw(6) << setfill('0') << bir2 << endl;
					cout << "감염되지 않았습니다." << endl << endl;
					result2 = 1;
					endCounter++;
					break;
				}
				//name3
				if (infected3 == 1 && result3 == 0)
				{
					cout << endl << name3 << " " << setw(6) << setfill('0') << bir3 << endl;
					cout << "확진자입니다. 격리하기 바랍니다." << endl << endl;
					result3 = 1;
					endCounter++;
					break;
				}
				else if (infected3 == 0 && result3 == 0)
				{
					cout << endl << name3 << " " << setw(6) << setfill('0') << bir3 << endl;
					cout << "감염되지 않았습니다." << endl << endl;
					result3 = 1;
					endCounter++;
					break;
				}
			}
			//cout << "예외 발생 : CASE4" << endl; //예외발생시 알리는 역할
			endCounter++; //예외발생시 종료 코드
			break;
		}
	}
	return 0;
}