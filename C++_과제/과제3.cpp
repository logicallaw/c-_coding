/*
�Է�
string�� �̸��� int�� ������� �Է� �޴´�.
double�� ü�°� bool�� ���� ������ boolalpha���� �Է¹޴´�.
�ż�, PCR, ���� �� �ϳ��� string�� ���ڿ��� �Է¹޴´�.

���
�̸��� ��������� ����Ѵ�.
����� ����Ѵ�.

��
���� 38���� �ʰ� AND ��ħ ���� true�� �����ǽ����̴�.
(����, ���� 38���� �ʰ��ϴ� �Ͱ� ��ħ ���� �� �ϳ��� false�� �̰����ǽ��ڴ�.)
�ż��׿��˻� OR PCR �ϳ��� true�� Ȯ���ڴ�.
�����ǽ��� AND Ȯ���� ��� Ȯ���ڸ� Ȯ���ڴ�.

����1
38.5 AND true  --> true �����ǽ���
PCR true --> true Ȯ����
�̸�, ������� ���

���
�����ǽ��� AND Ȯ���� --> Ȯ����
�̰����ǽ��� AND Ȯ���� --> Ȯ����
:Ȯ���ڸ� ������ Ȯ����
:Ȯ���ڰ� �ƴϸ� �����ǽ��� �Ǵ� �̰����ǽ���
:�̶�, �̰����ǽ��ڸ� �ƿ� ������.

�����ǽ��� AND Ȯ����X --> (��Ȯ����) �����ǽ���


����2
38.5 AND true --> �����ǽ���
���� --> Ȯ����X
�����ǽ��� AND Ȯ����X -->false ��Ȯ�����̸鼭 �����ǽ���

����3
36.5 AND false --> �̰����ǽ���
�ż� -->Ȯ����
�̰����ǽ��� AND Ȯ���� --> Ȯ����.

����4
38.5 AND false --> �̰����ǽ���
���� -->��Ȯ����
�̰����ǽ��� AND ��Ȯ����-->����
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

	cout << "�̸��� ��������� �Է��ϼ���.\n? ";
	cin >> name >> brithday;

	cout << "\nü�°� ��ħ ���� ����(true/false)�� �Է��ϼ���.\n? ";
	cin >> temperature >> coughString;

	//coughtString�� ���� coughBool�� �����Ѵ�.
	coughBool = coughString == "true" ? 1 : 0;

	cout << "\n�ż��׿��˻� �缺: �ż�, PCR �缺: PCR, ����: ����\n? ";
	cin >> resultInput;

	//�̸��� ������� ���
	cout << endl << name << " " << setw(6) << right << setfill('0') << brithday << endl;

	/*
	�����ǽ��� �Ǵ� ����(resultTemp1)
	�����ǽ��ڸ� 1��, �̰����ǽ��ڸ� 0���� �ʱ�ȭ��
	*/
	resultTemp1 = (temperature > 38 && coughBool) ? 1 : 0;

	/*
	Ȯ���� �Ǵ� ����(resultTemp2)
	Ȯ���ڸ� 1��, ��Ȯ���ڸ� 0���� �ʱ�ȭ��
	*/
	resultTemp2 = (resultInput != "����") ? 1 : 0;

	/*
	��� ���� ����(resultOutput)
	*/
	if (resultTemp2)
		//������ Ȯ����
		cout << "Ȯ�����Դϴ�. �ݸ��ϱ� �ٶ��ϴ�." << endl;
	else
	{
		if (resultTemp1)
			//��Ȯ�������� �����ǽ���
			cout << "�����ǽ����Դϴ�. �˻縦 ��������." << endl;
		else
			//Ȯ���� �ǽ��ڵ� �ƴ� ������ ������
			cout << "�������� �ʾҽ��ϴ�." << endl;
	}

	return 0;
}