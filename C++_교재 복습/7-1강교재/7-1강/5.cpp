#include <iostream>
using namespace std;
class Student {
private:
	int _id;
	string _name;
public:
	Student();
	Student(int id, string name);
	Student(const Student& origin);
	~Student();
};

int main(void)
{
	Student s1;
	Student s2{ 1, "pby" };
	Student s3{ s2 };
}

Student::Student()
{
	_id = 0;
	_name = "noname";
	cout << "default constructor: " << _id << " " << _name << endl;
}

Student::Student(int id, string name)
{
	_id = id;
	_name = name;
	cout << "parameter constructor: " << _id << " " << _name << endl;
}

Student::Student(const Student& origin)
{
	_id = origin._id;
	_name = origin._name;
	cout << "copy constructor: " << _id << " " << _name << endl;
}

Student::~Student()
{
	cout << "¼Ò¸êÀÚ constructor" << endl;
}