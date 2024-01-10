#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int menu(); //�޴��� ����մϴ�.
string action(int number); //�ൿ number�� string������ ��ȯ�մϴ�.
void process(int& scoreA, int& scoreB, int numA, int numB); //�ൿ�� ���� �����Ǵ� �մϴ�.

int main(void)
{
	int size;
	int numA, numB;
	cout << "<1999 ���� �ƽþ� ���� ���� ��� ��긣 �����>" << endl;
	cout << "������ �Է��ϼ���: ";
	cin >> size;
	cout << endl;

	int scoreA = 0, scoreB = 0;

	while (!(scoreA == size || scoreB == size)) //������ �����ϸ� ���α׷��� �����.
	{
		srand(time(0));
		//���� ������ number�� �Է¹޽��ϴ�.
		numA = menu();

		//������ ������ �ൿ�� ������ ������ ���� �޽��ϴ�.
		numB = rand() % 3 + 1;

		//���� ������ ������ ������ �ൿ number�� ����մϴ�.
		cout << "���� �ൿ: " << numA << ", ������ �ൿ: " << numB << endl;

		//process�Լ��� ����� ������ �ű�ϴ�.
		
		process(scoreA, scoreB, numA, numB);

		//process�Լ��� �������� ���� ���ھ ����Ѵ�.
		cout << "���� ����: " << scoreA << ", ������ ����: " << scoreB << endl << endl;
	}

	if (scoreA == size)
		cout << "���� �ݸ޴�!!";
	else
		cout << "������ �ݸ޴�!!(�Ф�)";

	return 0;
}

int menu()
{
	int temp;
	cout << "������ �����ϼ���." << endl;
	cout << "1. ���� 2. ���� 3. ���" << endl;
	cout << "? ";
	cin >> temp;
	return temp;
}

string action(int number)
{
	if (number == 1)
		return "����";
	if (number == 2)
		return "����";
	else
		return "���";
}

void process(int& scoreA, int& scoreB, int numA, int numB)
{
	string tempA, tempB;

	//���� ������ int�� �ൿ�� action�Լ��� ���ļ� string�� �ൿ���� �����մϴ�.
	tempA = action(numA);

	//������ ������ int�� �ൿ�� action�Լ��� ���ļ� string�� �ൿ���� �����մϴ�.
	tempB = action(numB);

	//���� ������ ������ ������ �ൿ���� �Ǵ��� ������ �ű��.

	/*
	�ൿ���� ��Ģ�� ������ �����ϴ�.
	����(1) > ����(2)
	���(3) > ����(1)
	����(2) > ���(3)
	*/

	if ((tempA == "����" && tempB == "����") || (tempA == "���" && tempB == "���") || (tempA == "����" && tempB == "����"))
	{
		//������ȭX
		//���� ���������� �ڵ� �ۼ��Ͽ����ϴ�.
	}
	else if (tempA == "����" && tempB == "���")
		scoreB++;
	else if (tempA == "����" && tempB == "����")
		scoreA++;
	else if (tempA == "���" && tempB == "����")
		scoreA++;
	else if (tempA == "���" && tempB == "����")
		scoreB++;
	else if (tempA == "����" && tempB == "����")
		scoreB++;
	else if (tempA == "����" && tempB == "���")
		scoreA++;
	
	//���ϰ��� �����ϴ�.
}