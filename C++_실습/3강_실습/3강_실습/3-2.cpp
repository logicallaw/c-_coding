#include <iostream>
//�� �ڸ� ���� �������� �� �ڸ��� �����ϴ� ���α׷��̴�.
//���ڸ� ���� ������ �Է¹޾� �� �ڸ��� ����Ѵ�.
using namespace std;
int main(void) {
  unsigned int num;

  cout << "�� �ڸ� ���� ���� �Է�: ";
  cin >> num;
   
  cout << endl;
  cout << "�Է��� ���� " << num << endl;        // 516
  cout << "���� �ڸ�: " << (num / 100) << endl; // 5
  num -= (num / 100) * 100;                     // 16
  cout << "���� �ڸ�: " << (num / 10) << endl;  // 1
  num -= (num / 10) * 10;                       // 6
  cout << "���� �ڸ�: " << (num / 1) << endl;   // 6

  return 0;
}