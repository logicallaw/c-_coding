#include <iostream>
using namespace std;

class Student
{
private:
	int _id;
	string _name;
public:
	Student(int id, string name)
		: _id{ id }, _name{ name }
	{
		cout << "parameter constructor: " << _id << " " << _name << endl;
	}
	~Student()
	{
		cout << "destructor: " << _id << " " << _name << endl;
	}
};

int main(void)
{
	Student s1{ 1, "pby" };
	Student s2(2, "wook");
}