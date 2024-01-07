#include <iostream>
using namespace std;
class Tmp {
private:
	int a = 5;
public:
	void setA() { a++; }
	int getA() const { return a; }
};

Tmp fun1(Tmp t) {
	return t;
}
Tmp fun2(Tmp& r) {
	return r;
}
Tmp* fun3(Tmp* p) {
	return p;
}

int main(void) {
	Tmp t; //5
	fun1(t).setA();
	cout << t.getA() << endl; //5

	fun2(t).setA();
	cout << t.getA() << endl; //5
	fun3(&t)->setA(); //변수의 주소를 받았음.
	(*fun3(&t).setA();

	cout << t.getA() << endl; //6

}