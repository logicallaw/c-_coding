#include <iostream>
//세 자리 양의 정수에서 각 자리를 추출하는 프로그램이다.
//세자리 양의 정수를 입력받아 각 자리를 출력한다.
using namespace std;
int main(void) {
  unsigned int num;

  cout << "세 자리 양의 정수 입력: ";
  cin >> num;
   
  cout << endl;
  cout << "입력한 정수 " << num << endl;        // 516
  cout << "백의 자리: " << (num / 100) << endl; // 5
  num -= (num / 100) * 100;                     // 16
  cout << "십의 자리: " << (num / 10) << endl;  // 1
  num -= (num / 10) * 10;                       // 6
  cout << "일의 자리: " << (num / 1) << endl;   // 6

  return 0;
}