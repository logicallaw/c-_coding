//C++-style
#include <iostream>
#include <string>
using namespace std;
int main(void) {
	string word;
	/*
	cin은 기본적으로 공백으로 구분하여 입력받는다.
	따라서, getline() 멤버함수를 사용하여, 공백 단위가 아닌
	기본 default값인 '\n' 개행문자를 기준으로 입력받는다.
	그러면, 공백을 포함한 문자열이 저장될 것이다.
	*/
	getline(cin, word);
	int cnt = 0;
	for (int i{ 0 }; i < word.length(); i++)
		if (word[i] == ' ')
			cnt++;
	if (word[0] == ' ')
		cnt--;
	if (word[word.length() - 1] == ' ')
		cnt--;
	cout << ++cnt;
	return 0;
}