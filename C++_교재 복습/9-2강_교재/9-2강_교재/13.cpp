#include <iostream>
using namespace std;

class Deep {
private:
	int* ptr;
public:
	Deep(int num)
		: ptr{ new int{num}} {} //매개변수 생성자 호출시 동적 메모리 할당
	~Deep() { delete ptr; } //메모리 해제
	void print() const { cout << *ptr << endl; }
	Deep(const Deep& origin)
		: ptr{ new int{*(origin.ptr) } } {}
	Deep& operator = (const Deep& origin) {
		*ptr = *origin.ptr;
		return *this;
	}
};

int main(void) {
	Deep s1{ 5 };
	Deep s2{ 0 };
	{
		Deep s3{ s1 };
		s2 = s3;
	}
	s1.print();
	s2.print();
	return 0;
}