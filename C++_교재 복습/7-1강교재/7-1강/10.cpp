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
	//�Ҹ��� ������ ������. �Ҹ��ڵ� �ݵ�� �ʿ��ϴ�.
	Student s2{ 1, "pby" };
	Student s3{ s2 };
}