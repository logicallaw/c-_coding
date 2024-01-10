#include <iostream>
using namespace std;

class Student
{
private:
	int _id;
	string _name;
public:
	//��� �ʱ�ȭ ����Ʈ
	Student()
		: _id{ 0 }, _name{ "noname" }
	{
		cout << "default constructor: " << _id << " " << _name << endl;
	} //�ٷ� ���ǽ� �ݷо���
	Student(int id, string name)
		: _id{ id }, _name{ name }
	{
		cout << "parameter constructor: " << _id << " " << _name << endl;
	}
	Student(const Student& origin)
		: _id{ origin._id }, _name{ origin._name }
	{
		cout << "copy constructor: " << _id << " " << _name << endl;
	}
};

int main(void)
{
	Student s1;
	Student s2{ 1, "pby" };
	Student s3{ s2 };
}