#include <iostream>
using namespace std;
class Student
{
private:
	const string subject = "C++";
	const int _id;
	string _name;
public:
	Student(int id, string name)
		//멤버초기화리스트는 객체 생성과정에서 실행된다.
		: _id{ id }, _name{ name }
		//body는 객체 생성 후 실행된다.
	{
		cout << "parameter constructor: " << _id << " " << _name << endl;
	}
};

int main(void)
{
	Student s1{ 1, "pby" };

	return 0;
}