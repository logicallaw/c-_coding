#include <iostream>
using namespace std;
class Tmp {
private:
	char* str; //char* ������
public:
	Tmp(string s)
		: str{ new char[s.length() + 1] } { //char�迭 �����Ϳ� �����Ҵ�. char�迭�� ����.
		//str = new char[s.length() + 1]; //���� ����
		for (int i{ 0 }; i < s.length(); i++) {
			str[i] = s[i]; //�� ��� ��ġ�� ���� ��� ����.
		}
		str[s.length()] = '\0'; //�� ���� �߰�.
		//���� ���� �ʱ�ȭ�� ���������ϰ�, �������� �� ���ڸ� �־���� �����Ⱚ ����� �ȵȴ�.
		//���� ���� �� �ʱ�ȭ �ϴ� ����:���̸� �𸣱� ������. �ѹ��� �Ұ�.
	}
	const char* getString() const {
		return str;
	}
	~Tmp() {
		delete[] str;
	}
};
int main(void) {
	Tmp t{ "pby" }; //string ���ڿ�=char�迭-> string �迭�� = char �迭�� = �ش� �迭�� ���� �ּ�
	cout << t.getString() << endl;
}