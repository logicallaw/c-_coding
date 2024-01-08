#include <iostream>
using namespace std;
class Tmp {
private:
	char* str; //char* 포인터
public:
	Tmp(string s)
		: str{ new char[s.length() + 1] } { //char배열 포인터에 동적할당. char배열로 생성.
		//str = new char[s.length() + 1]; //깊은 복사
		for (int i{ 0 }; i < s.length(); i++) {
			str[i] = s[i]; //각 요소 위치에 문자 상수 대입.
		}
		str[s.length()] = '\0'; //널 문자 추가.
		//선언 이후 초기화는 각각진행하고, 마지막에 널 문자를 넣어야지 쓰레기값 출력이 안된다.
		//따로 선언 후 초기화 하는 이유:길이를 모르기 때문에. 한번에 불가.
	}
	const char* getString() const {
		return str;
	}
	~Tmp() {
		delete[] str;
	}
};
int main(void) {
	Tmp t{ "pby" }; //string 문자열=char배열-> string 배열명 = char 배열명 = 해당 배열의 시작 주소
	cout << t.getString() << endl;
}