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
		//����ʱ�ȭ����Ʈ�� ��ü ������������ ����ȴ�.
		: _id{ id }, _name{ name }
		//body�� ��ü ���� �� ����ȴ�.
	{
		cout << "parameter constructor: " << _id << " " << _name << endl;
	}
};

int main(void)
{
	Student s1{ 1, "pby" };

	return 0;
}