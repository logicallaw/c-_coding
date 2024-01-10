#include <iostream>
//초 단위 시간을 시,분,초로 계산해 출력한다.
//양의 정수를 입력받아 각각을 출력한다.
using namespace std;
int main(void) {
  double second;
  int temp;
  cout << "초 단위 시간을 양의 정수로 입력: ";
  cin >> second;

  cout << endl;
  cout << "입력된 초 단위 시간: " << second << endl;
  
  second /= 3600;
  temp = static_cast<int>(second);
  
  cout << "결과: " << temp << "시간 ";
  
  second=(second-temp)*60;//54.16666
  temp = static_cast<int>(second); //54
  
  cout << temp << "분 ";
  
  second=(second-temp)*60; //10
  temp=static_cast<int>(second); //10
  
  cout << temp << "초" << endl;

  return 0;
}