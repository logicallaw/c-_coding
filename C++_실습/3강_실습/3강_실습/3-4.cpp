#include <iostream>
#include <iomanip>
//�� �л��� ������ �Է¹޾� ������ ����� ���� ����ϴ� ���α׷��̴�.
//������ 0���� 100������ ������.
//������ ���� �����̰� ����� double���̴�.
using namespace std;
int main(void)
{
	unsigned int a, b, c, total;
	double avg;

	cout << "ù ��° �л� ����: ";
	cin >> a;
	cout << "�� ��° �л� ����: ";
	cin >> b;
	cout << "�� ��° �л� ����: ";
	cin >> c;

	total = a + b + c;
	//unsigned int / int -->unsigned int / unsigned int �̹Ƿ� �Ҽ��� ���� ��� �ȵ�
	//����, unsinged int / double���� �ؾ��� �Ҽ��� ���ϱ��� ����Ѵ�.
	//�׷��� ������ �������� ��� �Ҽ��� ���ϰ� �����Ƿ� ����� ���Ѵٸ�
	//cout���� fixed,setprecision(2) �����ڸ� ����ؾ��Ѵ�.
	avg = total / 3.0;
	cout << "\n����: " << total << endl;
	cout << "���: " << fixed << setprecision(2) <<avg << endl;

	return 0;

}