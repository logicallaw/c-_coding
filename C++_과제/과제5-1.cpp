/*
���� ���� ����
�޴��� ����ϰ� ������ �����ϸ� �Ѱ��ִ� �Լ�

//�޴� ����Լ�
int menu()
{
	int temp;
	cout << "������ �����ϼ���." << endl;
	cout << "1. ���� 2. ���� 3. ���" << endl;
	cout << "? ";
	cin >> temp;
	return temp;
}



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
		//�޴��Լ��� �����մϴ�. ���ϰ����� ���� ������ int�� �ൿ�� �´�.
		numA = menu();

		//�Ź� �޶����� ������ ���� �ൿ�� int������ �����Ѵ�.
		numB= rand() % 3 + 1;
		cout << "���� �ൿ: " << numA << ", ������ �ൿ: " << numB << endl;

		//process�Լ��� ����� ������ �ű��.
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
//�Է¹��� number�� �������� string�� ������ �ٲپ� string���� �����Ѵ�.
string action(int number)
	if (number == 1)
		return "����";
	if (number == 2)
		return "���";
	else
		return "����";

//���� ���� ������ �ű�� �Լ��̴�.
void process(int& scoreA,int& scoreB, int numA, int numB)
{
	string tempA, tempB;
	int numB; //���� ���� int�� �ൿ

	//���� ������ �ൿ�� �Ǵ��ϰ� string�� tempA�� �����Ѵ�.
	tempA = action(numA);

	//������ ������ �ൿ�� tempB�� �����Ѵ�.
	numB= rand() % 3 + 1;
	tempB = action(numB);

	//���� ������ ������ ������ �ൿ ���� �Ǵ��� ������ �ű��.
	*�ൿ ���� ������ ����.
	����(1)>����(2)
	���(3)>����(1)
	����(2)>���(3)

	if ((tempA == "����" && tempB == "����") || (tempA == "���" || tempB == "���") || (tempA == "���� && tempB == "����"))
		//������ȭX
	else if (tempA == "����" && tempB == "���")
		scoreB++;
	else if (tempA == "����" && tempB == "����")
		scoreA++
	else if (tempA == "���" && tempB == "����")
		scoreA++;
	else if (tempA == "���" && tempB == "����")
		scoreA++;
	else if (tempA == "����" && tempB == "����")
		scoreB++;
	else if (tempA == "����" && tempB == "���")
		scoreA++;
}





*/