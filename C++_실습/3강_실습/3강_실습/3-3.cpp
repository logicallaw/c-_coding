#include <iostream>
//�� ���� �ð��� ��,��,�ʷ� ����� ����Ѵ�.
//���� ������ �Է¹޾� ������ ����Ѵ�.
using namespace std;
int main(void) {
  double second;
  int temp;
  cout << "�� ���� �ð��� ���� ������ �Է�: ";
  cin >> second;

  cout << endl;
  cout << "�Էµ� �� ���� �ð�: " << second << endl;
  
  second /= 3600;
  temp = static_cast<int>(second);
  
  cout << "���: " << temp << "�ð� ";
  
  second=(second-temp)*60;//54.16666
  temp = static_cast<int>(second); //54
  
  cout << temp << "�� ";
  
  second=(second-temp)*60; //10
  temp=static_cast<int>(second); //10
  
  cout << temp << "��" << endl;

  return 0;
}