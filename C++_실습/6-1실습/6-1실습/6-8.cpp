/*
���������� ���α׷�
�ڿ��� numWin�� �Էµȴ�.
�� ����� ������������ �ϴµ� 
���� �����ϴ� game()�� �����Ѵ�.
���Ǹ��� ����� ���������� ����Ѵ�.
�̰ܾ��ϴ� numȽ���� ���޵Ǹ� while�� ����ȴ�.(�̱�� ��� �����ϸ� �����̺�Ʈ �߻�)
������ ���۵ǰ� ó�� time(0)�� ������ time(0)���� �ʸ� ����� ���ش�.(����� ��)
unsigned int counter ���� Ƚ��/�Ź� ���,�Ź� ī��Ʈ
unsigned int numA, numB �ԷµǴ� ��/�� ���� ���
unsigned int scoreA, scoreB �̱� Ƚ�� ���� ����/�Ź� ���.

int main(void)

cout >> numWin; // �ڿ��� �Է�
unsigned int scoreA = 0, scoreB = 0
	
while (!(scoreA == numWin || scoreB == numWin)) // �̱�� ����� �����ϸ� while���� �����Ѵ�.
	cin >> numA >> numB

	//���и� ������ ���ھ �����ϰ� �̱����� ���������� ����Ѵ�.
	temp = game(numA, numB);
	if (temp) 
		scoreA++;
		cout << A�� �̱�
		cout << ���� ���� << scoreA << scoreB;
	else scoreB++;
	
//���� �̺�Ʈ
if (scoreA == numWin) cout << �������ڴ� A;
else cout << �������ڴ� B;

int game(unsigned int& a, unsigned int& b)
	string str1, str2;
	if (a == 1) str1 = "����";
	else if (a == 2) str1 = "����";
	else str1 = "��";
	
	if (b == 1) str2 = "����";
	else if (b == 2) str2 = "����";
	else str2 = "��";

	if ((str1 == "����" && str2 == "����")||(str1 == "����" && str2 == "��")||(str1 == "��" && str2 == "����")) return 0; //B�� �̱�� 0
	else if ((str1 == "����" && str2 == "��")||(str1 == "����" && str2 == "����")||(str1 == "��" && str2 == "����")) return 1; //A�� �̱�� 1
	else return 2;
	
	//else if ((str1 == "����" && str2 == "����") || (str1 == "����" && str2 == "����") || (str1 == "��" && str2 == "��")) return 2; //���� 2

	//���� ���� ���θ� �Ǵ��ϴ� �Լ�
	//�� ����� ������������ �Ű������� ���´�.
	//�˰��� ���� �̱� ����� �����Ѵ�.
	//���ϰ��� 1�� a�� �̱��, 0�� b�� �̱��
	���� > ����
	���� < ��
	���� > ��
	����1  ����2  ��3
	return 

*/

#include <iostream>
#include <ctime>
using namespace std;
unsigned int game(unsigned int& a, unsigned int& b);
int main(void)
{
	unsigned int numWin; //�ڿ���
	unsigned int scoreA = 0, scoreB = 0; //default:0
	unsigned int numA, numB;
	unsigned int counter = 0;
	long startTime, endTime;
	startTime = time(0);
	cout << "�̰ܾ� �ϴ� �Ǽ��� �Է����ּ���: ";
	cin >> numWin;


	while (!(scoreA == numWin || scoreB == numWin)) //�̱�� ����� �����ϸ� while���� �����Ѵ�.
	{
		cout << "A�� B�� ������ �Է��ϼ���(����: 1, ����: 2, ��: 3)." << endl;

		cout << (++counter) << "��° ���Դϴ� : ";
		cin >> numA >> numB;

		//���и� ������ ���ھ �����ϰ� �̱����� ���������� ����Ѵ�.
		int temp = game(numA, numB);
		if (temp == 0)
		{
			++scoreB;
			cout << "B�� �̰���ϴ�. ���� ������ A " << scoreA << ":" << scoreB << " B �Դϴ�." << endl;
		}
		else if (temp == 1)
		{
			++scoreA;
			cout << "A�� �̰���ϴ�. ���� ������ A " << scoreA << ":" << scoreB << " B �Դϴ�." << endl;
		}
		else
		{
			cout << "�����ϴ�. ���� ������ A " << scoreA << ":" << scoreB << " B �Դϴ�." << endl;
		}
	}
	endTime = time(0);
	cout << endl;
	if (scoreA == numWin) cout << "���� ���ڴ� A�Դϴ�. ������ ������ �ð��� " << endTime - startTime << "�� �Դϴ�." << endl;
	return 0;
}
unsigned int game(unsigned int& a, unsigned int& b)
{
	string str1, str2;
	if (a == 1) str1 = "����";
	else if (a == 2) str1 = "����";
	else str1 = "��";

	if (b == 1) str2 = "����";
	else if (b == 2) str2 = "����";
	else str2 = "��";

	if ((str1 == "����" && str2 == "����") || (str1 == "����" && str2 == "��") || (str1 == "��" && str2 == "����")) return 0; //B�� �̱�� 0
	else if ((str1 == "����" && str2 == "��") || (str1 == "����" && str2 == "����") || (str1 == "��" && str2 == "����")) return 1; //A�� �̱�� 1
	else return 2;
}