#include <iostream>
using namespace std;
class Tmp {
private:
	int a;
public:
	Tmp(){ cout << "������"; }
	~Tmp() { cout << "�Ҹ���"; }
};

int main(void) {
	for (int i{ 0 }; i < 3; i++)
		Tmp t1;
	return 0;
}