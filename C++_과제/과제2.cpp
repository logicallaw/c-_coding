#include <iostream>
#include <iomanip>
/*
�̸�, ����, ������ �� �ڷ����� �°�
������ �Է��� �ް�
�Է� ���� ���� �� ����� ����� �Ѵ�.
����, �� ����� �ܾ��� ���� ����ϰ�
�������� 3���� ������ double�� Ÿ������ �Ҽ������� ���ڸ����� �����Ҽ������� ����Ѵ�.
*/

using namespace std;
int main(void)
{
	//�� ���α׷��� ������ 9���� ������ �� �������� �ڷ����� ������� �����Ѵ�.
	string name1, name2, name3;
	unsigned int plus1, plus2, plus3;
	int minus1, minus2, minus3;

	/*
	�̸��� ���� ���� ���ĺ� 10���� �̳��� �� �ܾ� �Էµ��� �����Ѵ�.
	���԰� ������ �� �ڷ����� �°� �������� ���ڰ� �Էµȴ�.
	������ ���, ������ ������ ���������� �Էµȴ�.
	��, ���԰� ������ 99,999�� �̳��� �ݾ׸� �Է¹޴´�.
	*/

	//����ڷκ��� ������ �Է��� �޴´�.
	cout << "�̸�, ����, ����: ";
	cin >> name1 >> plus1 >> minus1;
	cout << "�̸�, ����, ����: ";
	cin >> name2 >> plus2 >> minus2;
	cout << "�̸�, ����, ����: ";
	cin >> name3 >> plus3 >> minus3;

	//�̸��� ����, ������ �� ���Ŀ� �°� ����Ѵ�.
	//���� ��� ������ setw() �ʺ� ������ ������ �������� ����Ѵ�.
	cout << endl << setw(10) << left << "�̸�" << setw(5) << right << "����" << setw(10) << right <<"����" << endl;
	cout << setw(10) << left <<name1 << setw(5) << right << plus1 << setw(10) << right << minus1 << endl;
	cout << setw(10) << left << name2 << setw(5) << right << plus2 << setw(10) << right <<  minus2 << endl;
	cout << setw(10) << left << name3 << setw(5) << right << plus3 << setw(10) << right << minus3 << endl;

	//�� ����� �ܾ��� ����� ���ٿ� ���ļ� ����Ѵ�.
	//�ܾ�=plus(unsigned int) + minus(int) --> (double) + (int) = (double)
	/*
	���⼭, plus�� �ڷ����� double���� �ٲٴ� ����
	:�ٷ� ����ϸ� minus�� int�� unsigned int�� �Ͻ��� ����ȯ �ǹǷ� ���� ����� �ȵȴ�.
	����, plus�� ������ �սǾ��� double������ ��ȯ�� double + int ����ϸ� �սǾ��� ���� ����� ����������.
	*/
	cout << "\n�ܾ� = " << (static_cast<double>(plus1) + minus1) << " (" << name1 << ")" << endl;
	cout << "�ܾ� = " << (static_cast<double>(plus2) + minus2) << " (" << name2 << ")" << endl;
	cout << "�ܾ� = " << (static_cast<double>(plus3) + minus3) << " (" << name3 << ")" << endl;
	
	//�� ����� ��� �ܾ��� ����Ѵ�.
	cout << "\n��� �ܾ� = " << fixed << setprecision(3) << (static_cast<double>(plus1) + static_cast<double>(plus2) + static_cast<double>(plus3) + minus1 + minus2 + minus3) / 3.0 << endl;

	return 0;

}