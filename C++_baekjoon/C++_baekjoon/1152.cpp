//C++-style
#include <iostream>
#include <string>
using namespace std;
int main(void) {
	string word;
	/*
	cin�� �⺻������ �������� �����Ͽ� �Է¹޴´�.
	����, getline() ����Լ��� ����Ͽ�, ���� ������ �ƴ�
	�⺻ default���� '\n' ���๮�ڸ� �������� �Է¹޴´�.
	�׷���, ������ ������ ���ڿ��� ����� ���̴�.
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