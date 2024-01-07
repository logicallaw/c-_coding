#include <iostream>
using namespace std;

class Tmp {
private:
	int a;
	int b;
public:
	Tmp()
		: a{ 0 }, b{ 0 } {
	}
	Tmp(int a, int b)
		: a{ a }, b{ b } {
	}
	void setData(int a, int b) {
		this->a = a;
		this->b = b;
	}
	void display() const {
		cout << a << " " << b << endl;
	}
};

int main() {
	Tmp tmpArr1[3];
	for (int i{ 0 }; i < 3; i++)
		tmpArr1[i].setData(i * 2 + 1, i * 2 + 2);
	for (const Tmp& t : tmpArr1)
		t.display();

	cout << endl;
	Tmp tmpArr2[3]{ Tmp{9,8}, Tmp{7,6}, Tmp{5,4} };
	for (const Tmp& t : tmpArr2)
		t.display();

	return 0;
}