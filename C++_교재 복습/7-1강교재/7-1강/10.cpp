#include <iostream>
using namespace std;

class Student
{
private:
	int _id;
	string _name;
public:
	Student() = delete;
	Student(int id, string name)
		: _id{ id }, _name{ name }
	{
		cout << "parameter constructor: " << _id << " " << _name << endl;
	}
	Student(const Student& origin) = default;
	~Student() = default;
};

int main(void)
{
	//소멸자 없으면 에러다. 소멸자도 반드시 필요하다.
	Student s2{ 1, "pby" };
	Student s3{ s2 };
}