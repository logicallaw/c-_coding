#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
	/*
	�� ���� ����
	�̸�, �������, �µ�, ��ħ�� �����ϰ�
	default�� �ʿ��� ������ �ʱ�ȭ�� ���ش�.(default:0)
	*/
	string name1 = "noname", name2 = "noname", name3 = "noname";
	int bir1 = 220101, bir2 = 220101, bir3 = 220101;
	double heat1 = 0, heat2 = 0, heat3 = 0;
	bool cough1, cough2, cough3;

	/*�� ���� ����
	�����ǽ��� ���θ� ���� ������ ���� �� �ʱ�ȭ�Ѵ�.(default:0)
	*/
	int suspect1 = 0, suspect2 = 0, suspect3 = 0;

	/*�� ���� ����
	Ȯ���� ���θ� ���� ������ ���� �� �ʱ�ȭ�Ѵ�. (default:0)
	*/
	int infected1 = 0, infected2 = 0, infected3 = 0;
	
	/*�� ���� ���� 
	4���� ��µǸ� �ߺ������ �����ϱ� ���� �̸� ������
	bool������ ���� �� �ʱ�ȭ�Ѵ�.
	bool���� 1�̸� �̹� ��µ� ���, 0�̸� ���� ����� ����̴�.
	*/
	bool result1 = 0, result2 = 0, result3 = 0;

	/*
	�ݺ����� ���ǹ��� ���� ī���ͺ�����
	�����ϰ� �ʱ�ȭ���ش�.
	*/
	int endCounter = 0, nameCounter = 0, heatCounter = 0, resultCounter = 0;

	/*
	�ݺ����� ���ǹ��� ���� �ӽ����庯����
	�����Ѵ�.
	���⼭, tempResult1 ������ CASE 2���� ���� �ӽ����庯��,
	tempResult2 ������ CASE 3���� ���� �ӽ����庯���� �ǹ��Ѵ�.
	����, tempResultInput�� CASE 3���� ���� �Է� ���� �ް�
	Ȯ���� ���θ� �Ǵ��� tempResult2 ������ ���� �����Ѵ�.
	*/
	string tempName;
	int tempBirth;
	double tempHeat;
	bool tempCough;
	int tempResult1;
	string tempResultInput;
	int tempResult2;
	/*
	���α׷� �� ����(�۵� ����)
	1.���α׷��� �۵���ų while���� �� �ȿ� �޴��� ���� switch���� �����Ѵ�.
	2.�� ���̽����� for���� ���Ǿ�
	  ���� ������ ���� �����ϴ��� ���θ� �Ǵ��ϰ�
	  ���� ���� �������� ������ ���������� ������� �� ������ �����Ѵ�.
	3.endCounter�� 3�� �Ǹ� ���α׷��� ����ȴ�.
	*/
	while (endCounter < 3)
	{
		int num;
		do
		{
			cout << "1. �Ż� ���� �Է�" << endl;
			cout << "2. �ǽ� ������ �ִ� ���" << endl;
			cout << "3. �ڷγ� �˻縦 ���� ���" << endl;
			cout << "4. ��� ���" << endl << "? ";
			cin >> num;
			if (num < 1 || num > 4)
			{
				cout << endl << "�߸��� �Է��Դϴ�." << endl;
			}
		} while (num < 1 || num > 4);

		switch (num) {
		case 1:
			nameCounter += 1;
			cout << endl << "�̸��� ��������� �Է��ϼ���." << endl << "? ";
			cin >> tempName >> tempBirth;
			cout << endl;
			/*
			for���� ����Ͽ�
			���� ������ ���� �����ϴ��� ���θ� �Ǵ��ϰ�
			���� ���� �������� ������ ���������� ������� �� ������ �����Ѵ�.
			*/
			for (unsigned int cntCase1{ 0 }; cntCase1 < nameCounter; cntCase1++)
			{
				if (tempName == name1 || tempName == name2 || tempName == name3)
				{
					//�̹� ����� ���� ������ ���� ���� �ߴ�
					nameCounter--;
					break;
				}
				if (cntCase1 == 0 && nameCounter == 1)
				{
					//name1�� �Էµ� �̸��� ���� ����
					name1 = tempName;
					bir1 = tempBirth;
					break;
				}
				else if (cntCase1 == 1 && nameCounter == 2)
				{
					//name2�� �Էµ� �̸��� ���� ����
					name2 = tempName;
					bir2 = tempBirth;
					break;
				}
				else if (cntCase1 == 2 && nameCounter == 3)
				{
					//name3�� �Էµ� �̸��� ���� ����
					name3 = tempName;
					bir3 = tempBirth;
					break;
				}
			}
			//cout << name1 << " " << name2 << " " << name3 << endl;
			break;
		case 2:
			heatCounter += 1;
			cout << endl << "ü�°� ��ħ ���� ����(true/false)�� �Է��ϼ���." << endl << "? ";
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
			cout << endl << "�ż��׿��˻� �缺: �ż�, PCR �缺: PCR, ����: ����" << endl << "? ";
			cin >> tempResultInput;
			cout << endl;
			tempResult2 = (tempResultInput != "����") ? 1 : 0;
			for (unsigned int cntCase3{ 0 }; cntCase3 < resultCounter; cntCase3++)
			{
				/*
				�ι�° �����. ù��° �ȵ�.
				
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
			CASE 4�� ��Ģ
			1.�Էµ� ������ ������� �����ǽ��� ������ ���� ����� 4�� ��� �켱�����̴�.
			2.bool���� �� ������� �����μ� 4�� if�� �ߺ� ����� �����Ѵ�.
			3.�̰����ǽ��ڸ� �ΰ��� ����� ���ۿ� ����. Ȯ���� �ƴϸ� ������.
			4.���� ���� ����� �� �̸��� ������ϵ� ����ؾ��Ѵ�.
			*/
			if (suspect1 == 1 || suspect2 == 1 || suspect3 == 1)
			{
				//name1
				if (suspect1 == 1 && result1 == 0)
				{
					if (infected1 == 1)
					{
						cout << endl << name1 << " " << setw(6) << setfill('0') << bir1 << endl;
						cout << "Ȯ�����Դϴ�. �ݸ��ϱ� �ٶ��ϴ�." << endl << endl;
						result1 = 1;
						suspect1 = 0;
						endCounter++;
						break;
					}
					else
					{
						cout << endl << name1 << " " << setw(6) << setfill('0') << bir1 << endl;
						cout << "�����ǽ����Դϴ�. �˻縦 ��������." << endl << endl;
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
						cout << "Ȯ�����Դϴ�. �ݸ��ϱ� �ٶ��ϴ�." << endl << endl;
						result2 = 1;
						suspect2 = 0;
						endCounter++;
						break;
					}
					else
					{
						cout << endl << name2 << " " << setw(6) << setfill('0') << bir2 << endl;
						cout << "�����ǽ����Դϴ�. �˻縦 ��������." << endl << endl;
						result2 = 1;
						suspect2 = 0;
						resultCounter--; //2��O 3��X, 2��O 3��X
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
						cout << "Ȯ�����Դϴ�. �ݸ��ϱ� �ٶ��ϴ�." << endl << endl;
						result3 = 1;
						suspect3 = 0;
						endCounter++;
						break;
					}
					else
					{
						cout << endl << name3 << " " << setw(6) << setfill('0') << bir3 << endl;
						cout << "�����ǽ����Դϴ�. �˻縦 ��������." << endl << endl;
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
					cout << "Ȯ�����Դϴ�. �ݸ��ϱ� �ٶ��ϴ�." << endl << endl;
					result1 = 1;
					endCounter++;
					break;
				}
				else if (infected1 == 0 && result1 == 0)
				{
					cout << endl << name1 << " " << setw(6) << setfill('0') << bir1 << endl;
					cout << "�������� �ʾҽ��ϴ�." << endl << endl;
					result1 = 1;
					endCounter++;
					break;
				}
				//name2
				if (infected2 == 1 && result2 == 0)
				{
					cout << endl << name2 << " " << setw(6) << setfill('0') << bir2 << endl;
					cout << "Ȯ�����Դϴ�. �ݸ��ϱ� �ٶ��ϴ�." << endl << endl;
					result2 = 1;
					endCounter++;
					break;
				}
				else if (infected2 == 0 && result2 == 0)
				{
					cout << endl << name2 << " " << setw(6) << setfill('0') << bir2 << endl;
					cout << "�������� �ʾҽ��ϴ�." << endl << endl;
					result2 = 1;
					endCounter++;
					break;
				}
				//name3
				if (infected3 == 1 && result3 == 0)
				{
					cout << endl << name3 << " " << setw(6) << setfill('0') << bir3 << endl;
					cout << "Ȯ�����Դϴ�. �ݸ��ϱ� �ٶ��ϴ�." << endl << endl;
					result3 = 1;
					endCounter++;
					break;
				}
				else if (infected3 == 0 && result3 == 0)
				{
					cout << endl << name3 << " " << setw(6) << setfill('0') << bir3 << endl;
					cout << "�������� �ʾҽ��ϴ�." << endl << endl;
					result3 = 1;
					endCounter++;
					break;
				}
			}
			//cout << "���� �߻� : CASE4" << endl; //���ܹ߻��� �˸��� ����
			endCounter++; //���ܹ߻��� ���� �ڵ�
			break;
		}
	}
	return 0;
}