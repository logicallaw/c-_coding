#include <iostream>
using namespace std;
class Rec
{
private:
	int _a;
	int _b;
public:
	Rec() = default;
	Rec(int a, int b);
	int getSum() const;
};
int main(void)
{
	Rec junho[20] = { Rec{0,0} };
	junho[0] = Rec{ 10,20 };
	junho[1] = Rec{ 2 ,3 };
	for (Rec jun : junho)
	{
		cout << jun.getSum() << endl;
	}
	return 0;
}

Rec::Rec(int a, int b)
	: _a{ a }, _b{ b } {}
int Rec::getSum() const { return _a + _b; }