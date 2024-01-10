#include <iostream>
using namespace std;

class Student
{
private:
	int _id;
	string _name;
public:
	//컴파일러가 만들어주는 대로 사용하겠다 : default
	Student() = default;
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
	Student s1;
	Student s2{ 1, "pby" };
	Student s3{ s1 };
}