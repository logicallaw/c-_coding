#include <iostream>
using namespace std;
class Tmp {
private:
	int a;
public:
	Tmp(){ cout << "持失切"; }
	~Tmp() { cout << "社瑚切"; }
};

int main(void) {
	for (int i{ 0 }; i < 3; i++)
		Tmp t1;
	return 0;
}